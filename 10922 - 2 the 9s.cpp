#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
    string n;
    while( getline(cin, n)&&n!="0"){
        int s=0;
        for(int j=0;j<n.size();j++){
            s+=n[j]-48;
        }
        int i=1,s2;
        if(s%9==0){
            while(s!=9){
            s2=0;
            while(s!=0){
                s2=s2+s%10;
                s=s/10;

            }
            i++;
            s=s2;
            }
            cout<<n<<" is a multiple of 9 and has 9-degree "<<i<<".\n";
        }
        else cout<<n<<" is not a multiple of 9.\n";

    }

    return 0;
}
