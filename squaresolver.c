# include <stdio.h>
#include <math.h>
int main(void){
    float a,b,c;
    float D;
    scanf('%f %f %f',a,b,c)
    D = b*b - 4*a*c
    if (D<0){
        printf("No roots")}
    else{
        if (D == 0){
            printf("%f",-b/(2*a))}
        else{
            printf("%f\t%f",(-b+sqrt(D)))/(2*a),(-b-sqrt(D)))/(2*a))}
        }
}
