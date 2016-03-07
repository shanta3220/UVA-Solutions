#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    while((cin>>n)&&n>-1){
        int i=0,a[100];
        if(n==0){
            cout<<n;
        }
        while(n!=0){
            a[i]=n%3;
            n=n/3;
            i++;
        }
        for(int k=i-1; k>=0; k--){
            cout<<a[k];
        }
        cout<<"\n";
    }
    return 0;
}
