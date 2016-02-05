#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,c,a[100];
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for (int i=0; i<n-1; i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    c++;
                    swap(a[j],a[j+1]);

                }

            }
        }

        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";


    }

    return 0;

}
