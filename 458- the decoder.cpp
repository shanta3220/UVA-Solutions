#include<iostream>
using namespace std;
int main()
{

    string a;
    while(getline(cin,a))
    {

        char b[a.size()];

        for(int i=0;i<a.size();i++)
        {
            b[i]=a[i]-7;
            cout<<b[i];


        }

    cout<<"\n";

    }
    return 0;



}
