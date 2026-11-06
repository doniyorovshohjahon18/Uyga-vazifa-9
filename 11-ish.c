#include <stdio.h>

int main() {
    int tanlov;

    printf("1 - Avtomobil\n");
    printf("2 - Avtobus\n");
    printf("3 - Poyezd\n");
    printf("4 - Samolyot\n");
    printf("Tanlang: ");
    scanf("%d", &tanlov);

    switch (tanlov) {
        case 1: 
	printf("Avtomobil\n"); 
		break;
        case 2: 
	printf("Avtobus\n"); 
		break;
        case 3: 
	printf("Poyezd\n"); 
		break;
        case 4: 
	printf("Samolyot\n"); 
		break;
        default: 
		printf("Noto'g'ri tanlov!\n");
    }

    return 0;
}
