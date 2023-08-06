#include <stdio.h>
int main()
{
    int X,Y,min,max,sum=0;
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        min=Y;
        max=X;
    }
    else
    {
        min=X;
        max=Y;
    }
    for(int i= (min+1); i<max; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

