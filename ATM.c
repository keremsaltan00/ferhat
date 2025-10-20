#include <stdio.h>

int main() {
    float bakiye = 1000.0;
    int secim;
    float miktar;

    while (1) {
        printf("\n--- ATM Uygulamasi ---\n");
        printf("1. Para Yatir\n");
        printf("2. Para Cek\n");
        printf("3. Bakiye Sorgulama\n");
        printf("4. cikis\n");
        printf("Seciminizi yapiniz (1-4): ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Yatirmak istediginiz miktari girin: ");
                scanf("%f", &miktar);
                bakiye += miktar;
                printf("%.2f TL yatirildi. Yeni bakiye: %.2f TL\n", miktar, bakiye);
                break;

            case 2:
                printf("Cekmek istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > bakiye) {
                    printf("Yetersiz bakiye!\n");
                } else {
                    bakiye -= miktar;
                    printf("%.2f TL cekildi. Kalan bakiye: %.2f TL\n", miktar, bakiye);
                }
                break;

            case 3:
                printf("Mevcut bakiye: %.2f TL\n", bakiye);
                break;

            case 4:
                printf("cikis yapiliyor...\n");
                return 0;

            default:
                printf("Gecersiz secim! Lutfen 1-4 arasinda bir deger girin.\n");
        }
    }

    return 0;
}
