#include <stdio.h>

// Create a function
void myFunction()
{
    int a, b, sum;
    printf("enter the value of A is :");
    scanf("%d", &a);
    printf("enter the value of b is :");
    scanf("%d", &b);

    sum = a + b;

    printf("the sum is %d", sum);
}
int main()
{
    myFunction(); // call the function
    return 0;
}