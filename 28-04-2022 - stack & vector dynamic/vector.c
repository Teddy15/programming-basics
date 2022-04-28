#include<stdio.h>
#include<stdlib.h>
#define INITIAL 2

struct vector {
    int* data;
    int size; 
    int capacity;
};

void push_back(struct vector* v, int value);
int remove_back(struct vector* v);
void push_front(struct vector* v, int value);
int remove_front(struct vector* v);
void resize(struct vector* v);
int empty(struct vector* v);
int full(struct vector* v);
int at(struct vector* v, int value);

void push_back(struct vector* v, int value) {
    if (full(v)) {
        resize(v);
    }

    v->data[v->size] = value;
    v->size++;
}

// TODO: For HW
// Return -1000 if empty
int remove_back(struct vector* v) {
    return 0;
}

void push_front(struct vector* v, int value) {
    if (full(v)) {
        resize(v);
    }

    for (int i = v->size; i >= 0; i--) {
        if (i == 0) {
            v->data[i] = value;
        } else {
            v->data[i] = v->data[i-1];
        }
    }
    v->size++;
}

// TODO: For HW
// Return -1000 if empty
int remove_front(struct vector* v) {
    return 0;
}

void resize(struct vector* v) {
    int* temp = (int*)malloc(sizeof(int) * v->capacity);
    for (int i = 0; i < v->size; i++) {
        temp[i] = v->data[i];
    }
    free(v->data);
    
    v->capacity *= 2;
    v->data = (int*)malloc(sizeof(int) * v->capacity);
    for (int i = 0; i < v->size; i++) {
        v->data[i] = temp[i];
    }
    free(temp);
}

int empty(struct vector* v) {
    return v->size == 0;
}

int full(struct vector* v) {
    return v->size == v->capacity;
}

// Return -1000 if value is not in vector!
int at(struct vector* v, int value) {
    for (int i = 0; i < v->size; i++) {
        if (v->data[i] == value) {
            return i;
        }
    }
    
    return -1000;
}

int main(int argc, char** argv) {
    struct vector* v = (struct vector*)malloc(sizeof(struct vector));
    v->data = (int*)malloc(sizeof(int) * INITIAL);
    v->size = 0;
    v->capacity = 2;

    push_front(v, 5);
    push_back(v, 10); // capacity =2 

    push_back(v, 15); // capacity = 4
    push_back(v, 20);

    for (int i = v->size-1; i >= 0 ; i--) {
        printf("%d\n", v->data[i]);
    }

    remove_back(v);
    remove_front(v);

    for (int i = v->size-1; i >= 0 ; i--) {
        printf("%d\n", v->data[i]);
    }
    
    printf("%d\n", v->size);

    push_front(v, 30);
    for (int i = v->size-1; i >= 0 ; i--) {
        printf("%d\n", v->data[i]);
    }
    printf("%d\n", v->size);

    return 0;
}