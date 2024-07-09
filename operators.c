#include <stdio.h>

int main(){
   int a, b;
   a = 34;
   b = 6;
   printf("a + b = %d\n", a+b);
   printf("a - b = %d\n", a-b);
   printf("a * b = %d\n", a*b);
   printf("a / b = %d\n", a/b);
   printf("a % b = %d\n", a%b);

   float c = 6.2;

   printf("Values for float number\n");
   printf("a + b = %f\n", a+c);
   printf("a - b = %f\n", a-c);
   printf("a * b = %f\n", a*c);
   printf("a / b = %f\n", a/c);

   return 0;
}