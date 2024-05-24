# Proje Adı: PIC16F877-HX711-Precision_Scales

## Proje Açıklaması | Project Description
Bu proje, bir PIC16F877A mikrodenetleyici kullanarak bir HX711 ağırlık sensörü ile veri toplama ve ölçüm yapma üzerine odaklanmaktadır. Projede, ağırlık sensöründen gelen verileri mikrodenetleyici aracılığıyla okuyor ve işliyoruz.

## İçindekiler | Table of Contents
- [Özellikler | Features](#özellikler)
- [Gereksinimler | Requirements](#gereksinimler)
- [Kurulum | Installation](#kurulum)
- [Kullanım | Usage](#kullanım)
- [Katkıda Bulunanlar | Contributors](#katkıda-bulunanlar)
- [Lisans | License](#lisans)

## Özellikler | Features
- HX711 modülünden ağırlık verilerini okuma | Reading weight data from the HX711 module
- PIC16F877A ile verilerin işlenmesi ve görüntülenmesi | Processing and displaying data with PIC16F877A
- Basit ve anlaşılır kod yapısı | Simple and understandable code structure
- Esnek ve genişletilebilir tasarım | Flexible and expandable design

## Gereksinimler | Requirements
- PIC16F877A Mikrodenetleyici | PIC16F877A Microcontroller
- HX711 Ağırlık Sensörü Modülü | HX711 Weight Sensor Module
- Proteus ve CCS C Compiler | Proteus and CCS C Compiler
- Breadboard ve bağlantı kabloları | Breadboard and jumper wires
- Elektronik bileşenler (dirençler, kondansatörler, vb.) | Electronic components (resistors, capacitors, etc.)

## Kurulum | Installation

### Donanım Bağlantıları | Hardware Connections
![My Image](https://github.com/lordgrimx/PIC16F877-HX711-Precision_Scales/blob/main/deneme.gitignore/proteus.png?raw=true)
1. HX711 modülünü PIC16F877A mikrodenetleyiciye bağlayın | Connect the HX711 module to the PIC16F877A microcontroller:
    - HX711 VCC -> 5V güç kaynağı | Power supply to HX711 VCC -> 5V
    - HX711 GND -> Toprak (GND) | Ground to HX711 GND
    - HX711 DOUT -> PIC16F877A RC0 pinine | Connect HX711 DOUT to PIC16F877A RC0 pin
    - HX711 SCK -> PIC16F877A RC1 pinine | Connect HX711 SCK to PIC16F877A RC1 pin
2. LCD(LM016L) ekranını bağlayın | Connect the LCD (LM016L) display:
    - LCD VSS -> Toprak (GND) | Ground to LCD VSS
    - LCD VDD -> 5V güç kaynağı | Power supply to LCD VDD -> 5V
    - LCD VEE -> Toprak (GND) | Ground to LCD VEE
    - LCD RS -> PIC16F877A RB1 pinine | Connect LCD RS to PIC16F877A RB1 pin
    - LCD RW -> PIC16F877A RB2 pinine | Connect LCD RW to PIC16F877A RB2 pin
    - LCD E -> PIC16F877A RB0 pinine | Connect LCD E to PIC16F877A RB0 pin
    - D0 - D7 -> PIC16F877A RB4 - RB7 pinlerine | Connect D0 - D7 to PIC16F877A RB4 - RB7 pins
3. Tare ve Rest butonlarını bağlayın | Connect the Tare and Reset buttons:
    - BTN TARE -> PIC16F877A RC2 pinine | Connect BTN TARE to PIC16F877A RC2 pin
    - BTN RESET -> PIC16F877A RC3 pinine | Connect BTN RESET to PIC16F877A RC3 pin

### Yazılım Kurulumu | Software Installation
1. Proteus ve CCS C Compiler bilgisayarınıza indirin ve kurun | Download and install Proteus and CCS C Compiler to your computer.
2. Proje dosyalarını bilgisayarınıza indirin ve CCS C Compiler'de açın | Download the project files and open them in CCS C Compiler.
3. Projeyi derleyin ve HEX dosyasını oluşturun yada Hali hazirdaki HEX dosyasini kullanin | Compile the project and generate the HEX file or use the pre-existing HEX file.
4. HEX dosyasını PIC16F877A mikrodenetleyiciye yüklemek için bir Proteusu acin ve MCU'ya çift tıklayarak HEX dosyasının File Path'ini seçip simülasyonu başlatın | Open Proteus and double-click on the MCU to select the File Path of the HEX file and start the simulation.

## Kullanım | Usage
1. Sistem çalıştırıldıktan sonra, HX711 modülünden gelen veriler mikrodenetleyici tarafından okunacak ve işlenecektir | After the system is powered on, data from the HX711 module will be read and processed by the microcontroller.
2. Ağırlık verilerini kontrol edin ve gerekli kalibrasyonları yapın | Check the weight data and perform necessary calibrations.
3. Projeyi genişletmek veya özelleştirmek için kodda değişiklikler yapabilirsiniz | You can make changes to the code to expand or customize the project.

## Katkıda Bulunanlar | Contributors
- **Sabri Alperen KAYA/lordgrimx** - Geliştirici | Developer
- **Semih GÜLŞEN/Semihhwastaken** - Geliştirici | Developer

## Lisans | License
Bu proje MIT Lisansı altında lisanslanmıştır | This project is licensed under the MIT License.
Daha fazla bilgi için `LICENSE` dosyasına bakın | See the `LICENSE` file for more information.
