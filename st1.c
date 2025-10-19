#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tahmin, sayi, deneme = 0;

    // Rastgele say� �retimi i�in zaman bazl� seed
    srand(time(NULL));
    sayi = rand() % 100 + 1; // 1-100 aras�nda rastgele say�

    printf("1 ile 100 aras�nda bir sayi tuttum. Tahmin et bakalim!\n");

    do {
        printf("Tahmininiz: ");
        scanf("%d", &tahmin);
        deneme++;

        if (tahmin < sayi) {
            printf("Daha buyuk bir sayi girin.\n");
        } else if (tahmin > sayi) {
            printf("Daha kucuk bir sayi girin.\n");
        } else {
            printf("Tebrikler! %d denemede dogru tahmin ettiniz.\n", deneme);
        }

    } while (tahmin != sayi);

    return 0;
}
