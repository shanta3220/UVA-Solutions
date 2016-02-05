#include<stdio.h>
int main()
{
    int m,n,t,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        m=m/3;
        n=n/3;
        s=n*m;
        printf("%d\n",s);
    }
    return 0;

}
