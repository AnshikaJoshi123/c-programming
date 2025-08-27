/*Experiment1: Installation, Environment Setup and starting with c language
3.Write a C program to perform any four arithmetic operation on two variable.*/
#include <stdio.h>
 int main()
 {
 	int a,b;// declaration
 	int s,c,k,j;
 	printf("Enter the value of a:");
 	scanf("%d",&a);
 	printf("Enter the value of b:");
 	scanf("%d",&b);
 	s=a+b;
 	printf("the sum of a and b is =%d\n",s);
 	c=a-b;
 	printf("the subtraction of a-b is=%d\n",c);
 	k=a*b;
 	printf("the multiplication of a*b is=%d\n",k);
 	j=a/b;
 	printf("the division of a/b is=%d\n",j);
 	return 0;	
 }

