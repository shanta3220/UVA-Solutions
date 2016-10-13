#include <iostream>
#include <cmath>
using namespace std;

void primefactors(long long int n)
{

    cout << n <<" =";
    if(n<0)
    {
        cout<<" "<<-1<<" x";
        n=abs(n);

    }

    while(n % 2 == 0)
    {
        if(n == 2)
          cout <<" " << 2 << "\n";
        
        else cout <<" "<< 2 <<" x";
    
        n=n/2;
    }
    for(int i=3; i <= sqrt(n); i=i+2)
    {
        while(n%i==0)
        {
            if(n==i) cout << " " << i << "\n";
            else cout << " " << i <<" x";
            n = n/i;
        }
    }
    if(n > 2) cout<< " " << n << "\n";
    
}

int main()
{
    long long int n;
    while(cin >> n&& n != 0)
    {
        primefactors(n);
    }
    return 0;
}
