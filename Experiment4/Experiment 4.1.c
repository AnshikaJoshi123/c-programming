/*Experiment 3: Conditional Statements
3. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.*/
#include <stdio.h>
int main()
 {
    int x1, y1, x2, y2, x3, y3;
    int area;

    printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
    printf("Enter coordinates of point1(x1 y1):");
    
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of point2(x2 y2):");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of point3(x3 y3) ");
    scanf("%d %d", &x3, &y3);

    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (area == 0)
        printf("The points are collinear\n");
    else
        printf("The points are not collinear.\n");

    return 0;
}
