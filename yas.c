#include <stdio.h>
#include <time.h>

int main() {
  time_t doğumTarihi;
  time_t şimdikiZaman;
  struct tm doğumTarihiBilgisi;

  // Kullanıcıdan doğum tarihini alıyoruz
  printf("Lütfen doğum tarihinizi girin (GGAAYYYY şeklinde): ");
  scanf("%d", &doğumTarihi);

  // Kullanıcının girdiği tarihi ayrıştırıyoruz
  doğumTarihiBilgisi = *localtime(&doğumTarihi);

  // Şimdiki zamanı alıyoruz
  time(&şimdikiZaman);

  // Doğum tarihinden şimdiki zamanı çıkararak yaşı buluyoruz
  int yaş = şimdikiZaman - doğumTarihi;

  // Sonuçları ekrana yazdırıyoruz
  printf("Doğum tarihiniz: %d-%d-%d\n", doğumTarihiBilgisi.tm_mday, doğumTarihiBilgisi.tm_mon+1, doğumTarihiBilgisi.tm_year+1900);
  printf("Şu anki zaman: %s", ctime(&şimdikiZaman));
  printf("Yaşınız: %d\n", yaş);

  return 0;
}
