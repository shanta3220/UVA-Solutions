#include <iostream>
using namespace std;
char s[200008]
int main() {
	
	int n,count0=0,count1=0;
	cin>>n;
	for (int i=0; i<n; i++){
	    cin>>s[i];
	    if(s[i]=='0')
            count0++;
       else count1++;
    }
     if(count0>count1)      
    cout<<count0-count1<<"\n";
    else cout<<count1-count0<<"\n";
	return 0;
}
	
