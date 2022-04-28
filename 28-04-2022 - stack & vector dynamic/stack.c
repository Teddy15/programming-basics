#include<stdio.h>
#include<stdlib.h>
#define INITIAL 2

struct stack {
    int* top;
    int size;
    int capacity;
};

int peek(struct stack* s);
int size(struct stack* s);
int empty(struct stack* s);
int full(struct stack* s);
void push(struct stack* s, int value);
int pop(struct stack* s);
void resize(struct stack* s);

int peek(struct stack* s) {
    return *(s->top);
}

int size(struct stack* s) {
    return s->size;
}

int empty(struct stack* s) {
    return s->size == 0;
}

int full(struct stack* s) {
    return s->size == s->capacity;
}

void push(struct stack* s, int value) {
    if (full(s)) {
        resize(s);
    }
    
    s->top[s->size] = value;
    s->size++;
}

int pop(struct stack* s) {
    if (empty(s)) {
        return -1000;
    }

    return s->top[--s->size];
}

void resize(struct stack* s) {
    int* temp = (int*)malloc(sizeof(int) * s->capacity);
    for (int i = 0; i < s->size; i++) {
        temp[i] = s->top[i];
    }
    free(s->top);
    
    s->capacity *= 2;
    s->top = (int*)malloc(sizeof(int) * s->capacity);
    for (int i = 0; i < s->size; i++) {
        s->top[i] = temp[i];
    }
    free(temp);
}

int main() {
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->top = (int*)malloc(sizeof(int) * INITIAL);
    s->size = 0;
    s->capacity = 2;

    push(s, 5);
    push(s, 10); // capacity =2 

    push(s, 15); // capacity = 4
    push(s, 20);

    for (int i = s->size-1; i >= 0 ; i--) {
        printf("%d\n", s->top[i]);
    }

    pop(s);
    pop(s);

    for (int i = s->size-1; i >= 0 ; i--) {
        printf("%d\n", s->top[i]);
    }
    
    printf("%d\n", s->size);

    push(s, 30);
    for (int i = s->size-1; i >= 0 ; i--) {
        printf("%d\n", s->top[i]);
    }
    printf("%d\n", s->size);

    return 0;
}