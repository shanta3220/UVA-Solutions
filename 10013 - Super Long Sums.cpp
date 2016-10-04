#include<iostream>
#include<cstdio>
using namespace std;
int a[1000000],b[1000000],c[1000000];
int main()
{
    int m, t, sum, z;
    cin >> t;
    while(t--){
        z = 0;   
        cin >> m;
        for(int i = 0; i < m; i++)
            cin >> a[i] >> b[i];
        for(int i = m - 1; i >= 0; i--){
            sum = a[i] +  b[i] + z;
            if(sum > 9){
                c[i] = sum % 10;
                z = 1;
            }
            else{
                c[i] = sum;
                z = 0;
            }
        }
            for(int i = 0; i < m; i++)
            	cout << c[i];
            cout << "\n";
            if(t != 0)
            	cout << "\n";
            
        }
        return 0;
}
