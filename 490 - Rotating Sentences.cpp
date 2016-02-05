#include<iostream>
#include <cstdio>
#include<cstring>
using namespace std;

int main()
{
    int maxlen=0, c=0;
    string a[101];
    while (getline(cin,a[c]))
    {
        if(a[c].size()>maxlen)
            maxlen=a[c].size();
        c++;

    }
        for (int i=0; i<maxlen; i++){
            for (int j=c-1; j>=0; j--){
                if (i < a[j].size())
                    cout<<a[j][i];
                else
                    cout<<" ";

            }
            cout<<"\n";
        }





    return 0;
}
