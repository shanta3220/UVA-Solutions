#include <iostream>
#include <queue>
using namespace std;
int main()
{   
    int t, num, n, j = 1; 
    cin >> t;
    priority_queue<int> minspeedclown;
    while(t--){
        cin >> n;
        for(int i = 0; i <n; i++){
            cin>>num;
            minspeedclown.push(num);
        }
        cout << "Case "<< j++ <<": "<<minspeedclown.top()<<"\n";
        
        while (!minspeedclown.empty()){
            minspeedclown.pop();
        }
    }
    
}
