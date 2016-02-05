#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    long long int a,l,a2,i,j=0;
    while(scanf("%lld %lld",&a,&l)==2)
    {

        if(a<0&&l<0)
            break;
        a2=a;
        i=0;
        j++;
        while(a<=l)
        {
            i++;
            if(a==1)
                break;

            if(a%2==0)
                a=a/2;
            else
                a=a*3+1;



        }
    cout<<"Case "<<j<<": A = "<<a2<<", limit = "<<l<<", number of terms = "<<i<<"\n";

    }
    return 0;
}
