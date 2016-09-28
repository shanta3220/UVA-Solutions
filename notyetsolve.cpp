#include <iostream>
#include<string.h>
using namespace std;
char s[100000000],a[100000000];
int main() {
	
	long long int i,j,k,n,l;
	cin>>n;
	for (i=0; i<n; i++)
	    cin>>s[i];
	k=0;
	for (i=0; i<n; i++){
	    if((s[i]=='1' && s[i+1]=='0')){
        i++;
        continue;
    }
    else if((s[i+1]=='1'&&s[i]=='1' && s[i+2]=='0'&&s[i+3]=='0')){
        i+=3;
        continue;
    }
    else{
            a[k]=s[i];
            k++;
    } 
    
    a[k]='\0';
    }
    
    
	l=strlen(a);
    cout<<l<<"\n";
	return 0;
}
