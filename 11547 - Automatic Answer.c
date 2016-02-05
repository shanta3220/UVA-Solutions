#include<stdio.h>
#include<ctype.h>

int main()
{
    int n,i,t,s;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        s=(((((((n*567)/9)+7492)*235)/47)-498)/10)%10;
        s=abs(s);
        printf("%d\n", s);
    }

     return 0;

}

