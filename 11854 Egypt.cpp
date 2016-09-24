#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long a,b,c,d;
	while(cin>>a>>b>>c)
	if(a==0&&b==0&&c==0)
	break;
	
	else{
	   
	    if(a*a==b*b+c*c)
	    cout<<"right\n";
	    else if(b*b==a*a+c*c)
	    cout<<"right\n";
	    else if(c*c==a*a+b*b)
	    cout<<"right\n";
	    else cout<<"wrong\n";
	}
	return 0;
}
