#include <stdio.h>

main(){
    int a, b, c;
    printf("Enter a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("Largest is a %d", a);
    else
        if (b > c)
            printf("Largest is b %d", b);
        else
            printf("largest is c %d", c);
}
