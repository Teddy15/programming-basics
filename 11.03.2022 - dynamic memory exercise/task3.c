#include <stdio.h>
#include <stdlib.h>

// Output word_count of file
void test(FILE* file) {
    char symbol;
    int word_count = 0, check = 0;

    while ((symbol = fgetc(file)) != EOF) {
        if (symbol == ' ' || symbol == '\t' || symbol == '\n' || symbol == '\0') {
            if (check) {
                word_count++;
                check = 0;
            }
        } else check = 1;
    }

    if(check) {
        word_count++;
    }

    //fclose(file);
    printf("Word count: %d\n", word_count);
    //free(filename);
}

int main() {
    char* filename;

    printf("Enter filename: ");
    scanf("%s", filename);
    
    FILE *file = fopen(filename, "r");
    test(file);
    fclose(file);
    
    return 0;
}

