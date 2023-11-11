#include <stdio.h>
int main(){
    float r;
    const float pi = 3.14; //use M_PI for pi value
    printf("Enter your r value: ");
    scanf("%f", &r);

    printf("Area of circle is : %.3f", 2*pi*r);
    return 0;
}