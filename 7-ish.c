#include <stdio.h>

int main() {
    int son;

    printf("Ikki xonali musbat son kiriting: ");
    scanf("%d", &son);

    if (son >= 10 && son <= 99) {
        int teskari = (son % 10) * 10 + son / 10;
        printf("Teskari son: %d\n", teskari);
    } else {
        printf("Xato! 10 dan 99 gacha son kiriting.\n");
    }

    return 0;
}
