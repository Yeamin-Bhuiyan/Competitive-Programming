#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    for (int i=2; i<=n; i=i+2)
    {
        if(i%2==0)
        {
            x=i*i;
            printf("%d^2 = %d\n",i,x);
        }
    }
    return 0;
}



