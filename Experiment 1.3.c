/*Experiment 1: installation, Environment setup and starting with C language

2. Write a C program to add two numbers, take number from user.*/
#include <stdio.h>
int main()
{
    int a,b;//declaration
    printf("enter the value a = "); 
    scanf("%d",&a);
    printf("enter the value b = "); 
    scanf("%d",&b);
    int sum=0;
    sum = a + b;
    printf("%d",sum);
    return 0;
}
