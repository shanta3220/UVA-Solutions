#include<iostream>
using namespace std;
int main()
{
    long long hs, op;
    while(cin>>hs>>op)
    {
        if(hs>op)
            cout<<hs-op<<"\n";
        else cout<<op-hs<<"\n";
    }
    return 0;

}
