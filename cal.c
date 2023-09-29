#include<stdio.h>

void main()
{
    int a,b, sum, sub, mul, div;

    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);

    sum= a+b;
    sub = a-b;
    mul= a*b;
    div= a/b;

    printf("Sum %d \n", sum);
    printf("Subtraction %d \n", sub);
    printf("Multiplication %d \n", mul);
    printf("Division %d \n", div);
}