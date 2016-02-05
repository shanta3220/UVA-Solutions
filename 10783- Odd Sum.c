#include<stdio.h>
int main()
{

    int i,j,s ,a,b,t;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d",&a,&b);
            s=0;
            if(a%2==0)
                a=a+1;
                
            for(j=a; j<=b; j+=2)
                s+=j;
            printf("Case %d: %d\n",i,s);


       }
    }
    return 0;

}
