#include <stdio.h>
int main()
 {
    int l1, l2, l3, b1, b2, b3;
    int perimeter1, perimeter2, perimeter3, max;
     printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
	

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    perimeter1 = 2 * (l1 + b1);
    perimeter2 = 2 * (l2 + b2);
    perimeter3 = 2 * (l3 + b3);
    max = (perimeter1 > perimeter2) ? 
    ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) : 
   ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);

    printf("\nPerimeter of Rectangle 1 = %d", perimeter1);
    printf("\nPerimeter of Rectangle 2 = %d", perimeter2);
    printf("\nPerimeter of Rectangle 3 = %d", perimeter3);
    printf("\nThe largest perimeter is: %d\n", max);

    return 0;
}


