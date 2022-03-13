#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test() {
    
}

int main() {
    size_t MAX_LINES = 25;
    size_t MAX_CHARS = 1000;

    // char* line = (char*)malloc(sizeof(char) * MAX_CHARS);
    char** lines = (char**)malloc(MAX_LINES * MAX_CHARS * sizeof(char));
    int counter = 0;
    //getline(&lines[counter], &MAX_CHARS, stdin);

    while(getline(&lines[counter], &MAX_CHARS, stdin) != -1) {
        if (strcmp(lines[counter], "\n") == 0) break;
        counter++;
    }

    //lines[0]
    char temp;
    for(int x = 0; x < counter; x++) {
        for(int i = 0; i < strlen(lines[x]) - 1; i++) {
            for(int j = 0; j < strlen(lines[x]) - 1 - i ; j++) {
                if(lines[x][j] > lines[x][j+1]) { //sa -> as
                    temp = lines[x][j];
                    lines[x][j] = lines[x][j+1];
                    lines[x][j+1] = temp;
                }
            }
        }
        printf("%s\n", lines[x]);
    }

    return 0;
}