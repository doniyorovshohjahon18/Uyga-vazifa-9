#include <stdio.h>

int main() {
    int son;

    printf("1 - Bahor\n");
    printf("2 - Yoz\n");
    printf("3 - Kuz\n");
    printf("4 - Qish\n");
    printf("Faslni tanlang: ");
    scanf("%d", &son);

    switch (son) {
        case 1:
	printf("Bahor\n"); 
		break;
        case 2: 
	printf("Yoz\n"); 
		break;
        case 3: 
	printf("Kuz\n"); 
		break;
        case 4: 
	printf("Qish\n"); 
		break;
        default: 
		printf("Noto'g'ri raqam!\n");
    }

    return 0;
}
