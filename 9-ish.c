#include <stdio.h>

int main() {
    int pul;
    int sum = 0;

    while (sum < 100000) {
        printf("Qancha pul yig'dingiz? ");
        scanf("%d", &pul);

        if (pul > 0) {
            sum += pul;
        } else {
            printf("Musbat summa kiriting!\n");
        }
    }

    printf("Jami yig'ilgan pul: %d sum\n", sum);

    return 0;
}
