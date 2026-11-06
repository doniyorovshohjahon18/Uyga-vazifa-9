#include <stdio.h>

int main() {
    int tanlov;

    printf("1 - Osh\n");
    printf("2 - Lag'mon\n");
    printf("3 - Manti\n");
    printf("4 - Sho'rva\n");
    printf("5 - Somsa\n");
    printf("Taomni tanlang: ");
    scanf("%d", &tanlov);

    switch (tanlov) {
        case 1: 
	printf("Osh\n"); 
		break;
        case 2: 
	printf("Lag'mon\n"); 
		break;
        case 3: 
	printf("Manti\n"); 
		break;
        case 4: 
	printf("Sho'rva\n"); 
		break;
        case 5: 
	printf("Somsa\n"); 
		break;
        default: 
		printf("Bunday taom mavjud emas!\n");
    }

    return 0;
}
