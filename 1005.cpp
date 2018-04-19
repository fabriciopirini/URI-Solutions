#include<stdio.h>

int main(){
    double a, b, media;
    scanf("%lf %lf", &a, &b);
    a = 3.5 * a / 11.0;
    b = 7.5 * b / 11.0;
    media = a + b;
    printf("MEDIA = %.5lf\n", media);
    return 0;
}
