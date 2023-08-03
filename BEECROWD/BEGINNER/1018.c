#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,c,d,e,f,g,h;
    scanf("%d",&n);
    a= n/100;
    h= n%100;
    b= h/50;
    h = h%50;
    c= h/20;
    h = h%20;
    d= h/10;
    h = h%10;
    e= h/5;
    h = h%5;
    f= h/2;
    g = h%2;
    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);
    return 0;
}
