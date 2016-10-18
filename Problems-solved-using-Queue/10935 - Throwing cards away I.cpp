#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> s;
    int n,x;
    while(cin>>n&&n!=0)
    {
        for(int i=1; i<=n; i++){
            s.push(i);
        }
        cout<<"Discarded cards:";
        while(s.size()>1){
            cout<<" "<<s.front();
            s.pop();
            x=s.front();
            s.pop();
            if(!s.empty())
                cout<<",";
            s.push(x);
        }

        cout<<"\nRemaining card: "<<s.front()<<"\n";
        s.pop();
    }



return 0;
}
