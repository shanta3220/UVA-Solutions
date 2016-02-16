#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n, s, d;
    cin>>n;
    while(n--){
      long long int sum2=0,sum1=0;
      cin>>s>>d;
      if(s<d)
        cout<<"impossible\n";
      else{
        sum1 = s+d;
        sum2 = sum1/2;
        if(s-sum2==sum2-d&&sum1%2==0)
         cout<<sum2<<" "<<sum2-d<<"\n";
        else cout<<"impossible\n";
      }
    }
}
