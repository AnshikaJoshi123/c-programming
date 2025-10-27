/* 4.3 Patterns: 13*/ 
#include<stdio.h> 
int main() 
{  
printf("Anshika Joshi\nSAP ID: 590028351\nCourse: BSc. CS. \nBatch: 1"); 
printf("\n-----------------\n"); 
printf("The pattern is:\n"); 
int i, j, k; 
for(i=1; i<6; i++) 
{ 
for(k=1; k<=i; k++) 
{ 
printf(" ");
}
for(j=5; j>=i; j--) 
{ 
printf("%d", j); 
}
printf("\n"); 
}
return 0;
}
