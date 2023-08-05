#include <stdio.h>

int main()
{
    float num,sum=0,average;
    int i,count=0;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
            sum = sum + num;
            count++;
        }
    }
    average = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);
    return 0;
}
