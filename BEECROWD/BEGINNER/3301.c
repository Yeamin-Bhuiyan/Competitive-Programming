#include<stdio.h>

int main ()
{
    int H =0, Z = 0, L = 0;
    scanf("%d%d%d",&H,&Z,&L);
    int min,max;
    if (H<Z && H<L) min = H;
    else if(Z<H && Z<L) min = Z;
    else    min = L;



    if (H>Z && H>L)  max = H;
    else if(Z>H && Z>L) max = Z;
    else max = L;

      if (max==H || min==H)
      {
          if(max==L || min==L) printf("zezinho\n");
          else printf("luisinho\n");
      }else if(max==L || min==L)
      {
          if (max==Z || min==Z)  printf("huguinho\n");
      }
    return 0;
}
