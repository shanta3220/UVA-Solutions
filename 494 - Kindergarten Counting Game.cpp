#include<iostream>
using namespace std;
int main()
{

    string b;
    while(getline(cin,b))
    {
        int c=0;
       for(int i=0;i<b.size();i++)
        {
            if(b[i]>=65&&b[i]<=122)
            {

                if(b[i+1]<65||b[i]>122)
                    c++;

            }


        }
        cout<<c<<"\n";

    }
    return 0;



}

