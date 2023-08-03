#include <stdio.h>

int main()
{
    double A,B,C,tri,cir,tra,squ,rec,pi;
    scanf("%lf%lf%lf",&A,&B,&C);
    pi=3.14159;
    tri = (0.5*A*C);
    cir = (pi*C*C);
    tra = (.5*(A+B)*C);
    squ = (B*B);
    rec = (A*B);
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",squ);
    printf("RETANGULO: %.3lf\n",rec);
    return 0;
}
