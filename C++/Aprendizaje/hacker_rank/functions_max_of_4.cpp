#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// prototype
int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    int n1 = a;
    int n2 = c;
    
    if (a < b) { n1 = b; }
    
    if (c < d) { n2 = d; }
    
    if (n1 > n2) { return n1; }
    
    return n2;
    
}
