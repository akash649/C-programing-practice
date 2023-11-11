#include <stdio.h>

int main(){
    float a;
    float b;

    printf("Enter your a value : ");
    scanf("%f", &a );
    printf("Enter your b value : ");
    scanf("%f", &b );
   

   printf("(a + b)^2 result is : %.3f\n", a*a+2*a*b+b*b);
   printf("(a + b)^3 result is : %.3f\n", a*a*a+2*a*b+b*b*b);
   printf("(a - b)^2 result is : %.3f\n", a*a+2*a*b-b*b);
   printf("(a - b)^3 result is : %.3f\n", a*a*a+2*a*b-b*b*b);
   printf("a^2 - b^2 result is : %.3f\n", (a+b)*(a-b));
   printf("a^3 + b^3 result is : %.3f\n", (a+b)*(a*a-a*b+b*b));
   printf("a^3 + b^3 result is : %.3f\n", (a-b)*(a*a+a*b+b*b));

    return 0;
}