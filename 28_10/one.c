#include <stdio.h>

int main() {
    int product = 1;
    
    printf("Enter a series of numbers (enter y to stop):\n");
    
    int x;
    while (scanf("%d", &x) == 1 ) {
        if (x != 0) {
            product *= x;
        }
        
        printf("The current value of product is: %d\n", product);
    }
    
    return 0;
}