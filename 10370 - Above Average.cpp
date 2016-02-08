#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t = 0,n;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];
        double sumtotal=0, s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s += a[i];
        }

        s = s/n;
        for(int i=0; i<n; i++){
            if(a[i]>s)
               sumtotal+=1;
        }

        cout << fixed << setprecision(3) << (sumtotal/n)*100 <<"%\n";
    }


    return 0;
}


