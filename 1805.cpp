#include <stdio.h>

int main()
{
    long long a, b, i, j, soma;

    while(scanf("%lld %lld" , &a, &b) > 0){
        soma = 0;
        for(i = a, j = b; i < j; soma += (a + b), ++i, --j);

        if((b - a + 1) % 2)
            soma += i;

        printf("%lld\n", soma);
    }

    return 0;
}
