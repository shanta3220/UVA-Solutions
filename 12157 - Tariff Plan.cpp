#include<iostream>
#include<string>

using namespace std;

int main() {
	int t, s, n, j=1, m, m2;
	int a[50];
	cin >> t;
	while(t--){
	    cin >> n;
	    int sum1 = 0,sum2 = 0;
	    for(int i = 0; i < n; i++){
	        cin>>m;
	        m2 = m;
	        while( m > 29){
	            m-=29;
	            sum1+=10;
	            
	       }
	       
	       if(m!=29) 
	           sum1+=10;
	       while( m2 > 59){
	            m2 -= 59;
	            sum2+=15;
	            
	       }
	       if(m2!=59){
	           sum2+=15;
	       }
	   }
	   if (sum1<sum2) cout<<"Case "<<j++<<": "<< "Mile " <<sum1<<"\n";
	   else if (sum1>sum2) cout<<"Case "<<j++<<": "<< "Juice " <<sum2<<"\n";
	   else cout<<"Case "<<j++<<": "<<"Mile Juice "<<sum1<<"\n";
	}
	return 0;
}
