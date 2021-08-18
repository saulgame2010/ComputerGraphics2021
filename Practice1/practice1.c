#include <stdio.h>
#include <stdlib.h>

void main() {
    int x1, y1, x2, y2;
    printf("Enter a pair of numbers (x1, y1) separated by a space\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter a pair of numbers (x2, y2) separated by a space\n");
    scanf("%d %d", &x2, &y2);
    printf("%d, %d\n", x1, y1);
    printf("%d, %d\n", x2, y2);
    if((x1 < 0 || y1 > 100)) {
        printf("You must enter numbers between 0 and 100");
        exit(-1);
    } else {
        if((x2 < 0 || y2 > 100)) {
            printf("You must enter numbers between 0 and 100");
        } else {
            int i;
            printf("X\t Y\n");
            for(i = x1; i < x2; i++){
                printf("%d\t %d\n", i, (((y2-y1)*i-x1)/(x2-x1))+y1);
            }
        }
    }
}