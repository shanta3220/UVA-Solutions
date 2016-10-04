#include <iostream>
using namespace std;
int main()
{
    int n, x, r;
    while(cin >> n && n!=0 )
    {
          
          r = 0;
          for(int i = 0 ; i < n ; i++) {
               cin >> x;
               r ^= x ;
               
          }
        
        if(r == 0) cout << "No\n";
        else cout << "Yes\n";
        
    }
    
    
    
}
