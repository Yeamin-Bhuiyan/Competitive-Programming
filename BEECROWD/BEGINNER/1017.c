#include <stdio.h>
#include <math.h>

int main()
{
    int dis,time;
    float fuel_per_l ,total;
    scanf("%d%d",&time,&dis);
    fuel_per_l = 12;
    total = (time*dis)/fuel_per_l;
    printf("%.3f\n",total);
    return 0;
}
