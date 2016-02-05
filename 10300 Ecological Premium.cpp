#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,i, f,j, s, a, p,e=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>f;
        for(j=0; j<f; j++)
        {
            cin>>s>>a>>p;
            e+=s*p;

        }

        cout<<e<<"\n";
        e=0;


    }

}

