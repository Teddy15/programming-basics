#include<stdio.h>

struct pet {
    int age;
};

// Good practice
void eat(struct pet*);

// Not so good practice
void sleep(struct pet *p) {
    eat(p);
}

int main() {
    struct pet p;
    p.age = 10;
    eat(&p);
    printf("Age: %d\n", p.age);
    int i, j;

    i = 0, j = 1;

    if (!i && j){
        printf("Good!\n");
    } else {
        printf("Bad\n");
    }

    int x = -2, y = 0, z = 4, w = 1;

    x = z++ - w;
    y = --x - z++;
    w *= (x++) - (z++);
    z /= y++ * --x; //z = z / (y++ * --x); --> The same
                    //z /= (y++ * --x); --> The same

    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);
    printf("W: %d\n", w);
    return 0;
}

void eat(struct pet* pet) {
    pet->age++;
}
