#include <stdio.h>
#include <stdlib.h>

void main() {
    int i;
    int x1, y1, x2, y2, y;
    double m, b;
    printf("Enter a pair of numbers (x1, y1) separated by a space\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter a pair of numbers (x2, y2) separated by a space\n");
    scanf("%d %d", &x2, &y2);
    if((x1 < 0 || y1 > 100)) {
        printf("You must enter numbers between 0 and 100");
        exit(-1);
    } else {
        if((x2 < 0 || y2 > 100)) {
            printf("You must enter numbers between 0 and 100");
        } else {
            if(x1 == x2) {
                printf("The equation is: x=%d", x1);
            }
            else if(y1 == y2) {
                printf("The equation is: x=%d", y1);
            } else {
                m = (y2 - y1)/(x2 - x1);
                b = y1 - (m * x1);
                printf("X\t Y\n");
                for(i = x1; i <= x2; i++) {
                    y = (m * i) + b;
                    printf("%d\t %d\n", i, y);
                }
            }
        }
    }
}