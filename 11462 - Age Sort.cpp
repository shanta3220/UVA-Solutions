#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int, vector <int>, greater <int> > minheap;
	
	int n, num;
	while(cin >> n && n !=0){
	    for(int i = 0; i <n; i++){
	        cin >> num;
	        minheap.push(num);
	    }
	    for(int i = 0; i <n; i++){
	        cout << minheap.top();
	        minheap.pop();
	        if( i != n-1)
	            cout << " ";
	            
	    }
	    cout << "\n";
	}
	
	return 0;
}
