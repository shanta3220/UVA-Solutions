#include <iostream>
#include <cstring>
#include<stack>
using namespace std;

int main()
{
    int n,l,i;
    string a;
    cin>>n;
    cin.ignore();
    for(int j=1;j<=n;j++){
        stack<char> stc;
        getline(cin,a);
        l = a.size();
        if(l==0){
            cout<<"Yes\n";
            continue;
        }
        for(i=0; i<l; i++){
            if(a[i]=='('||a[i]=='['){
                    stc.push(a[i]);
                }
                else if (!stc.empty() && ((stc.top()=='[') && (a[i]==']') || (stc.top()=='(') && a[i]==')'))
                   stc.pop();
                else if(a[i]==' ')
                    continue;
                else
                    break;

            }
             if(stc.empty() && l==i)
                cout<<"Yes\n";
            else
                cout<<"No\n";

    }

    return 0;
}
