#include <stdio.h>
#include <math.h>

int main()
{
    int t,p,s;
    double a,v1,v2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        scanf("%d",&s);
        a = (sqrt(pow(p,2) - 24*s));
        v1 = (p - 2*a) * pow((p + a),2);
        v2 = (p + 2*a) * pow((p - a),2);
        if(v2 > v1)
        printf("%.2f\n",v2/1728);
        else
        printf("%.2f\n",v1/1728);
    }
    return 0;
}
