#include<iostream>
using namespace std;
int main()

{
    int t,n,f;
    cin>>t;
    while(t--){

    	cin>>n>>f;

   	 for(int l=0; l<f; l++){
        for(int i=1; i<=n; i++){
            for(int j=1;j<=i; j++){

               cout<<i;
            }

            cout<<"\n";
        }

        for(int k=n-1; k>=1; k--){
            for(int j=1;j<=k; j++){
                 cout<<k;
               }
	     cout<<"\n";

        }
	if(l!=f-1)

	    cout<<"\n";


    }
    if(t)
	cout<<"\n";

    }
 return 0;
}










