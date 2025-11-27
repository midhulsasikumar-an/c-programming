
#include <stdio.h>

int gcd(int a, int b) {
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int g = gcd(a, b);
    int l = (a * b) / g;

    printf("GCD = %d\nLCM = %d\n", g, l);

    return 0;
}
