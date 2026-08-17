#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c;
    float D;
    printf("ax^2+bx+c input a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    D = b*b - 4*a*c;
    if (D<0) {
        printf("No roots\n");
    } else {
        if (D == 0) {
            printf("x1=%f\n",-b/(2*a));
        } else {
            printf("x1=%f\tx2=%f\n",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
        }
    }
}
