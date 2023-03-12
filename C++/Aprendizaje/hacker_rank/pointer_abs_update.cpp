#include <stdio.h>


void update(int *a,int *b);
int abs2(int x);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


void update(int *a,int *b) {
    int a_temp = *a;
    *a = *a + *b;
    *b = abs2(a_temp - *b);
}

int abs2(int x) {
    if (x > 0) { return x;}
    
    return -x;
}