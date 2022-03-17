#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// Read from console until encounter of empty line or 
// you have read 25 lines.
// Max 100 symbols on line, max 25 lines.
// Display the length of all the lines
// Display the length of the longest line
// Use dynamic memory and char**

int main() {   
    size_t MAX_LINES = 25;
    size_t MAX_CHARACTERS = 1000;

    char** lines = (char**)malloc(sizeof(char) * MAX_CHARACTERS * MAX_LINES);
    int* length_of_lines = (int*)malloc(sizeof(int) * MAX_LINES);
    
    int counter = 0;
    int max = -1;
    while(getline(&lines[counter], &MAX_CHARACTERS, stdin) != -1) {
        if (!strcmp(lines[counter], "\n") || counter == MAX_LINES) {
            break;
        }  

        length_of_lines[counter] = strlen(lines[counter]);
        if(length_of_lines[counter] > max) {
            max = length_of_lines[counter];
        }
        counter++;
    }

    for (int i = 0; i < counter; i++) {
        printf("Length of line %d: %d\n", i+1, length_of_lines[i]);
    }

    printf("Max: %d\n", max);
    free(length_of_lines);

    for (int i = 0; i < MAX_LINES; i++) {
        free(lines[i]);
    }

    free(lines);
    return 0;
}