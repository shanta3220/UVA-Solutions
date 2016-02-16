#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n=0,k=0;
    while(cin>>n>>k){

        cout<<n+(n-1)/(k-1)<<"\n";

    }
    return 0;
}
