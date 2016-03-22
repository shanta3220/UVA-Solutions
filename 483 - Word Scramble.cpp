#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string a;
	while(getline(cin,a)){
        int l=0, lc=a.size()-1;
        for (int i=0; i<=lc; i++){
            if(a[i]==' '){
                for (int j=i-1; j>=l; j--){
                    cout << a[j];

                }
                l=i+1;
                cout<<a[i];

            }
            else if(i==lc){
                for (int j=lc; j>=l; j--){
                        cout << a[j];

                }

            }

        }
        cout<<"\n";
	}

	return 0;
}
