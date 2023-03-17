#include <stdio.h>

int main(){
    int x[5];

    for (int i = 0; i < 5; i++) {
        x[i] = i+1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d \n", x[i]);
    }
}