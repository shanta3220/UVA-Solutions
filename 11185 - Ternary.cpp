#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int n,c=0,r=0, i=0, binary=0;
    while((cin>>n)&&n!=-1)
    {
        long n2=n;
        long n3=n;

        while(n2!=0)
        {
            n2=n2/10;
            c++;
        }

          while(n3!=0&&i!=c-1){
              r=n3%10;
              binary=binary+r*pow(2,i);
              n3=n3/10;
              i++;
        }

        binary+=3;
        cout<<binary;


    }
}
