#include <stdio.h>

int main() {
	
    int n, i,f=1;
    
    
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("not a factorial");
    else {
        for (i = 1; i <= n; ++i) {
            f *= i;
        }
        printf("Factorial of %d = %llu", n, f);
    }

    return 0;
}
