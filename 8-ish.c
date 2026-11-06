#include <stdio.h>

int main() {
    int parol;

    printf("Parolni kiriting: ");
    scanf("%d", &parol);

    while (parol != 12345) {
        printf("Parol xato! Qayta kiriting: ");
        scanf("%d", &parol);
    }

    printf("Parol to'g'ri!\n");

    return 0;
}
