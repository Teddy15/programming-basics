#include<stdio.h>

void test(int* a) {
    
    (*a)++; //*a++; DIFFERENT!!
    //2 + (5 / 10) -> Calculates the + then the / if there are no ().
    
    //*a+=1; //-> *a = *a + 1;
    printf("%d\n", *a);
}

int main() {
    int b = 10;
    test(&b);
    printf("%d\n", b);
    int r = -1;
    int x = 2;
    int y = 3;
    int z = --x + y++; // z = 4, x=1, y=3;
    //y=4;
    y -= 2; //y=2
    x *= --z; // x = x * --z -> 1 * 3 -> x=3, z=3
    //r = (x++) - (z--) * --y; // 3 - 3 * 1 -> r=0
    // x e 3++ -> x=4; z e 3-- -> z=2


    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", r = (x++) - (z--) * --y);
    
    //printf("%d\n", r++);
    //printf("%d\n", r);


    while(NULL) { // 1, 0, -1. !1, !-1, !0, NULL, !NULL
        printf("%d\n", 10);
    }

    return 0;
}