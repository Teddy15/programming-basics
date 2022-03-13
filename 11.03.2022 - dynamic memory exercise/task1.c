#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 20
// Min? , Max?

int main() {
    int n;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while(n <= 0 || n >= INT_MAX);

    int* array = (int*)malloc(n * sizeof(int));
    
    printf("Enter a number: ");
    scanf("%d", array);
    
    // 5, 3, 0, -1
    int min = *array; // same as min = *(array + 0)
    int max = *array; 
    
    for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", array + i);
        
        if (min > *(array + i)) {
            min = *(array + i);
        }
        
        if (max < *(array + i)) {
            max = *(array + i);
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    free(array);
    return 0;
}