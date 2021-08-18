#include <stdio.h>
#include <stdlib.h>

void main() {
    int x, y;
    float x1, y1, x2, y2, m, b;
    printf("Enter a pair of numbers (x1, y1) separated by a space\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter a pair of numbers (x2, y2) separated by a space\n");
    scanf("%f %f", &x2, &y2);
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
                for(x = x1; x <= x2; x++) {
                    y = (m * x) + b;
                    printf("%d\t %d\n", x, y);
                }
            }
        }
    }
}