#include <stdio.h>

int main() {
    int son;
    int musbat = 0;
    int manfiy = 0;

    printf("Son kiriting (0 - to'xtatish): ");
    scanf("%d", &son);

    while (son != 0) {
        if (son > 0) {
            musbat++;
        } else {
            manfiy++;
        }

        printf("Son kiriting (0 - to'xtatish): ");
        scanf("%d", &son);
    }

    printf("Musbat sonlar soni: %d\n", musbat);
    printf("Manfiy sonlar soni: %d\n", manfiy);

    return 0;
}
