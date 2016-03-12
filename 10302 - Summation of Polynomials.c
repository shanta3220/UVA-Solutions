#include<stdio.h>
#include<math.h>
int main()
{
   int i,n,x;
   long long s;
   while(scanf("%d",&x)==1)
       {
            s=1;
            s=s*x*(x+1)/2;
            s=s*x*(x+1)/2;


           printf("%lld\n",s);


       }
       return 0;

   }

