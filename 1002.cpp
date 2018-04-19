#include<stdio.h>
#include<math.h>

int main(){
    double r, A;
    scanf("%lf", &r);
    A = 3.14159 * powl(r,2);
    printf("A=%.4f\n", A);
    return 0;
}
