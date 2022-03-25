#include<stdio.h>
#include<stdlib.h>
struct person {
    char* name;
    int age;
};

int main(int argc, char** argv) {
    for (int i = 0; i < argc; ci++) {
        printf("%s\n", argv[i]);
    }
    int a;
    int* b = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(6);

    long long* d = (long long*)malloc(sizeof(long long));
    printf("%zu\n", sizeof(d));

    struct person* p = (struct person*) malloc(sizeof(struct person));
    p->name = (char*)malloc(sizeof(char) * 35);
    scanf("%s", p->name);
    printf("%s\n", p->name);
    return 0;
}