#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   long n,r;
    while(cin>>n&&n!=0)
    {
        if(n<10)
            cout<<n<<"\n";
        if(n>9){
            while(n>9){
                r=0;
                while(n!=0){
                    r=r+n%10;
                    n=n/10;
                }
                n=r;
            }
            cout<<r<<"\n";

        }

    }

    return 0;
}
