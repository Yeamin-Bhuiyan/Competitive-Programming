#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else if (b>a)
    {
        c = b-a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }else
    {
        c=(b+24)-a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    return 0;
}
