#include <iostream>
#include<string>
using namespace std;

int main() {
	string s,a;
	long long int i,j,k,n,l;
	cin>>n>>s;
	cin.ignore();
	j=1;
	while(j!=0){
	 j=0;
	for (i=0,k=0; i<s.length(); i++){
	    if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i-1]=='1')){
        j++;
        continue;
    }
    else{
            a[k]=s[i];
            k++;
    }
    l=a.length();
    cout<<l<<"\n";
	    
	}
	
	return 0;
}
