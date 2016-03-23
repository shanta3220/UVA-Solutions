#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	string a,b,n;
	char temp;
	while(getline(cin,a)&&getline(cin,b)){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i=0; i<a.size(); i++){
            for (int j=0; j<b.size(); j++){
                   if(a[i]==b[j])
                    {
                        cout<<b[j];
                        b[j]='#';
                        break;

                        
                    }
            }
        }

        cout<<"\n";

	}
    return 0;
}
