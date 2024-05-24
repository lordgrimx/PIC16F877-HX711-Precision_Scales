# Proje Adı: PIC16F877-HX711-Precision_Scales

## Proje Açıklaması
Bu proje, bir PIC16F877A mikrodenetleyici kullanarak bir HX711 ağırlık sensörü ile veri toplama ve ölçüm yapma üzerine odaklanmaktadır. Projede, ağırlık sensöründen gelen verileri mikrodenetleyici aracılığıyla okuyor ve işliyoruz.

## İçindekiler
- [Özellikler](#özellikler)
- [Gereksinimler](#gereksinimler)
- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Katkıda Bulunanlar](#katkıda-bulunanlar)
- [Lisans](#lisans)

## Özellikler
- HX711 modülünden ağırlık verilerini okuma
- PIC16F877A ile verilerin işlenmesi ve görüntülenmesi
- Basit ve anlaşılır kod yapısı
- Esnek ve genişletilebilir tasarım

## Gereksinimler
- PIC16F877A Mikrodenetleyici
- HX711 Ağırlık Sensörü Modülü
- MPLAB IDE ve XC8 Kompiler
- Breadboard ve bağlantı kabloları
- Elektronik bileşenler (dirençler, kondansatörler, vb.)

## Kurulum

### Donanım Bağlantıları
1. HX711 modülünü PIC16F877A mikrodenetleyiciye bağlayın:
    - HX711 VCC -> 5V güç kaynağı
    - HX711 GND -> Toprak (GND)
    - HX711 DT -> PIC16F877A RB0 pinine
    - HX711 SCK -> PIC16F877A RB1 pinine
2. Gerekli diğer bağlantıları yapın ve sistemi çalıştırmak için güç kaynağını bağlayın.

### Yazılım Kurulumu
1. MPLAB IDE ve XC8 kompileri bilgisayarınıza indirin ve kurun.
2. Proje dosyalarını bilgisayarınıza indirin ve MPLAB IDE'de açın.
3. Projeyi derleyin ve HEX dosyasını oluşturun.
4. HEX dosyasını PIC16F877A mikrodenetleyiciye yüklemek için bir programlayıcı kullanın.

## Kullanım
1. Sistem çalıştırıldıktan sonra, HX711 modülünden gelen veriler mikrodenetleyici tarafından okunacak ve işlenecektir.
2. Ağırlık verilerini kontrol edin ve gerekli kalibrasyonları yapın.
3. Projeyi genişletmek veya özelleştirmek için kodda değişiklikler yapabilirsiniz.

## Katkıda Bulunanlar
- **İsim 1** - Geliştirici
- **İsim 2** - Geliştirici

## Lisans
Bu proje MIT Lisansı altında lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasına bakın.
