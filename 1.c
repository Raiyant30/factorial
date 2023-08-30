#include<stdio.h>
int main()
{
    int i,n,a,b,p=0;
    double c,d;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        scanf("%lf %lf",&c,&d);
        while(1)
        {
            a = a + (double)a * (c/100.00);
            b = b + (double)b * (d/100.00);
            p++;
            if(a>b)
            {
                printf("%d anos\n",p);
                p=0;
                break;
            }
            else if(p>100)
            {
                printf("Mais de 1 seculo.\n");
                p=0;
                break;
            }
        }
    }
}
