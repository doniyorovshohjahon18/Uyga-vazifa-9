#include <stdio.h>

int main() {
    int tanlov;
    float sum;

    printf("1 - Dollar (USD)\n");
    printf("2 - Yevro (EUR)\n");
    printf("3 - Rubl (RUB)\n");
    printf("Valyutani tanlang: ");
    scanf("%d", &tanlov);

    printf("Summa kiriting (UZS): ");
    scanf("%f", &sum);

    if (sum < 0) {
        printf("Summa manfiy bo'lishi mumkin emas.\n");
        return 0;
    }

    switch (tanlov) {
        case 1: 
	printf("Dollar: %.2f USD\n", sum / 11 931.11); 
		break;
        case 2: 
	printf("Yevro: %.2f EUR\n", sum / 13 332.0); 
		break;
        case 3: 
	printf("Rubl: %.2f RUB\n", sum / 145.69); 
		break;
        default: 
		printf("Noto'g'ri tanlov!\n");
    }

    return 0;
}
