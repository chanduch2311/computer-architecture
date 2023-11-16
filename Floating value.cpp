#include <stdio.h>
int main() {
    double n1, n2, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);  
   
    product = n1 * n2;

   
    printf("floating value = %.3lf", product);
    
    return 0;
}

