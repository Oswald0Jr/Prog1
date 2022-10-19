#include <stdio.h>

int divisor(int x, int n) {
    if (n % x == 0) 
        return 1;
    else
        return 0;
}

int main() {
    int n, i = 1;
    scanf("%d", &n);
    do {
        if (divisor(i, n))
            printf("%d ", i);
        i++;
    } while (i <= n);
    
    return 0;
}
