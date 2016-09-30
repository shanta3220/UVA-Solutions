#include <iostream>
using namespace std;
int main() {
	long long n,p,s2,i;
	while(cin>>s2&&s2!=0){
	int s = s2;
	int flag=0;
    while(s--){
    for(i=2;i<=s/2;++i)
    {
      if(s%i==0)
      {
          flag=0;
          break;
      }
      else flag=1;
    }
    if(flag==1)
       break;
    
}
  cout << s2 <<" = "<< s2-s <<" + "<< s <<"\n";
}
	return 0;
}
