#include <stdio.h>
#include <math.h>

int main()
{
    int n,hour,min,sec;
    scanf("%d",&n);
    hour = n/3600;
    n = n%3600;
    min = n/60;
    sec= n%60;
    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}
