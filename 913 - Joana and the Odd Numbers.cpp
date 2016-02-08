#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    long long int n, num, larvalue,totalsum;//long long int as it says n>2^63
    while(cin>>n)
    {
        num=(n+1)/2;
        larvalue= (num *num *2)-1;
        totalsum= larvalue+larvalue-2+larvalue-4;//(or 3*larvalue-6)
        cout<<totalsum<<"\n";
    }
    return 0;

}
