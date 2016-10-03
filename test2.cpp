#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,i;
    string s;
	int germany = 0, italy = 0, france = 0, turkey = 0,spain = 0, england = 0;
    cin>>t;
    while(t--){
	   getline(cin,s);
	   for(int i = 0; i<s.size();i++){
	    if(s[i]=='G') {
	        germany++;
	        break;
	        
	    }
	    else if (s[i]=='I') {
	        italy++;
	        break;
	        
	    }
	    else if  (s[i]=='F') {
	        france++;
	        break;
	        
	    }
	    else if  (s[i]=='T') {
	        turkey++;
	        break;
	        
	    }
	    else if  (s[i]=='S') {
	        spain++; break;
	        
	    }
	    else if  (s[i]=='E'){ 
	        england++; 
	        break;
	        
	    }
	    else continue;
	   }
    }
	   if(england>0) cout<<"England "<< england<<"\n";
	   if(france>0) cout<<"France "<<france<<"\n";
	   if(germany>0) cout<<"Germany "<<germany<<"\n";
       if(italy>0) cout<<"Italy "<<italy<<"\n";
       if(spain>0) cout<<"Spain "<<spain<<"\n";
       if(turkey>0) cout<<"Turkey "<<turkey<<"\n";
    
	return 0;
}
