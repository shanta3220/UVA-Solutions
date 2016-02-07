#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    while(cin>>t){
        if(t==0)
            break;
        else{

            int a[t], sum=0, count=0;
            for (int i=0; i<t; i++){
                cin>>a[i];
                sum+=a[i];

            }
            sum=sum/t;
            for (int i=0; i<t; i++){
                if(sum<a[i])
               count+=(a[i]-sum);

            }

            cout<<"Set #"<<j++<<"\n";
            cout<<"The minimum number of moves is "<<count<<".\n";
        }
        cout<<"\n";

    }


        return 0;


}
