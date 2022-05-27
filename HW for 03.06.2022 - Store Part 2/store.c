#include <stdio.h>
#include <stdlib.h>

struct Product {
    char* name;
    int quantity;
    double price;
    
    struct Product* next;
};

int main() {
    int option;
    while(1) {
        printf("1. Add product\n");
        printf("2. Check product price by product name\n");
        printf("3. Check product quantity by product name\n");
        printf("4. Remove product by name\n");
        printf("5. Revision of products\n");
        printf("6. Restock product by name\n");
        printf("7. Show products' details\n");
        printf("8. Exit\n");
        
        printf("Choose an option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Implement your logic!\n");
                break;
            case 2:
                printf("Implement your logic!\n");
                break;
            case 3:
                printf("Implement your logic!\n");
                break;
            case 4:
                printf("Implement your logic!\n");
                break;
            case 5:
                printf("Implement your logic!\n");
                break;
            case 6:
                printf("Implement your logic!\n");
                break;
            case 7:
                printf("Implement your logic!\n");
                break;
            case 8:
                return 1;
            default:
                printf("Not a possible option!\n");
                break;
        }
    }
    return 0;
}