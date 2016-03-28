#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
    int t,l,m,size,i,sum,count;
    string side;
    bool true1;
    queue<int> left;
    queue<int> right;
    cin>>t;
    for (int j = 0; j < t; j++){
       cin>>l>>m;
        for(i=0; i<m; i++){
            cin>>size>>side;
            if(side == "left")
                left.push(size);
            else right.push(size);
        }
        l= l*100;
       count=0,sum=0,true1=0;
        while(!left.empty() || !right.empty()){
            sum=0;
             if(true1==1){
             while (!right.empty() && sum + right.front() <= l ){
                    sum+=right.front();
                    right.pop();
                }

            }
            else{
                while (!left.empty() && sum + left.front() <=l){
                    sum+=left.front();
                    left.pop();
                }
            }
            count++;
            true1=true1-1;


        }
        cout<<count<<"\n";



    }

    return 0;
}
