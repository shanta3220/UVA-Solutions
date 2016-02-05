#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;

    while(getline(cin,a)){
        int c=0;
        int l=a.size();
        for(int i=0;i<l;i++){
            if(a[i]>='0'&&a[i]<='9')
            {
                c+=a[i]-'0';
            }

            else if(a[i]=='b'){
                for(int j=0;j<c;j++){
                    cout<<" ";

                }
                c=0;

            }

            else if(a[i]=='!'){

                cout<<"\n";
            }


            else{
                for(int j=0;j<c; j++){
                    cout<<a[i];

                }
                c=0;

            }

        }
        cout<<"\n";


    }
    
   return 0;
}




