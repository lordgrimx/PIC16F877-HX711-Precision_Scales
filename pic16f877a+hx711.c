#include <16F877A.h>

// Microcontroller fuse settings
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#use delay(clock = 20 MHz) // System clock frequency set to 20 MHz

// Pin definitions
#define DT1 pin_c0 // HX711 data output pin
#define SCK pin_c1 // HX711 clock signal pin
#define TARE_BUTTON pin_c2 // Tare button pin
#define RESET_BUTTON pin_c3 // Reset button pin

// LCD configuration
#define use_portb_lcd TRUE // LCD connected to port B
#include <lcd.c> // Include LCD library

// Calibration scale (SCALE)
double SCALE = 36.05; // Calibration value for the weighing system

// HX711 data reading function
unsigned int32 readCount(void) {
  unsigned int32 data; // Create a variable for store the 24-bit data in HX711
  unsigned int8 j; // Create a variable to for loop
  output_bit(DT1, 1); // Set DT1 pin high
  output_bit(SCK, 0); // Set SCK pin low
  data = 0; // Initialize data to zero

  // Wait until DT1 pin goes low
  while (input(DT1));
  
  // 24-bit data reading loop
  for (j = 0; j < 24; j++) {
    output_bit(SCK, 1); // Set SCK pin high (send clock pulse)
    data = data << 1; // Shift data left
    output_bit(SCK, 0); // Set SCK pin low again
    if (input(DT1)) { // If DT1 pin is high
      data++; // Increment data
    }
  }
  
  // Send an extra clock pulse and adjust the sign bit
  output_bit(SCK, 1);
  data = data ^ 0x800000; // Adjust the sign bit using XOR operation
  output_bit(SCK, 0);
  
  return data; // Return the read data
}

void main() {
  lcd_init(); // Initialize the LCD
  printf(lcd_putc, "\f Leave the scale\nempty.."); // Display instruction on the LCD
  delay_ms(2500); // Wait for 2.5 seconds

  unsigned int32 read1 = 0, offset = 0; // Variables to store data and offset
  float gram = 0; // Weight in grams
  offset = readCount(); // Read initial offset value

  while (TRUE) {
    read1 = readCount(); // Read data from HX711

    // If tare button is pressed
    if (input(TARE_BUTTON) == 0) {
      delay_ms(20); // Wait for button debouncing
      if (input(TARE_BUTTON) == 0) {
        offset = read1; // Set new offset value
        printf(lcd_putc, "\f Tare Done"); // Display tare done message on the LCD
        delay_ms(2000); // Wait for 2 seconds
      }
    }

    // If reset button is pressed
    if (input(RESET_BUTTON) == 0) {
      delay_ms(20); // Wait for button debouncing
      if (input(RESET_BUTTON) == 0) {
        printf(lcd_putc, "\f Resetting.."); // Display resetting message on the LCD
        delay_ms(2000); // Wait for 2 seconds

        // Reset the microcontroller
        reset_cpu();
      }
    }

    // If the read value is less than or equal to the offset value
    if (offset >= read1) {
      float val1 = (offset - read1); // Calculate the offset difference
      gram = val1; // Assign the difference to gram variable
    } else {
      float val2 = (read1 - offset); // If read value is greater than offset
      gram = val2; // Assign the difference to gram variable
    }

    // If the calculated weight is within a certain range
    if ((gram / SCALE) <= 1000.5) {
      printf(lcd_putc, "\fWeight:\n %f grams", gram / SCALE); // Display weight on the LCD
      delay_ms(50); // Short delay
    } else {
      printf(lcd_putc, "\fWeight:\n Error"); // Display error message
    }
  }
}

