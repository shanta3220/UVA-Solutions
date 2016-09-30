#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long long int n;
    int t;
    
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        cin >> n;
        
        long long sum = n * (n-1);
        
        cout << "Case " << i << ": ";
        
        if(sum%4==0)
            cout << sum/4 <<"\n";
        else cout <<sum/2 << "/2\n";
    }
    
    return 0;
}
	
