#include<stdio.h>
#include<stdlib.h>

struct animal {
    char* name;
};

void test() {
    struct animal* snake = (struct animal*)malloc(sizeof(struct animal));
}

int main() {
    struct animal** snakes = (struct animal**)malloc(sizeof(struct animal)*5);
    snakes[0] = (struct animal*)malloc(sizeof(struct animal)*6);
    snakes[0]->name = (char*)malloc(sizeof(char)*20);
    test();
    struct animal s[10];
    return 0;
}