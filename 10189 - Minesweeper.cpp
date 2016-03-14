#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m,n,count=0;
    while((cin >> n >> m) && m != 0 && n !=0 ){
        count++;  //#x
        if (count > 1){
            cout << "\n"; //extra newline will be here rather than at the end of the loop.[since an error will be found when m=0||n=0]
        }
        char a[101][102] = {0};
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if(a[i][j] == '.'){

                    a[i][j] = '0';
                    if(a[i][j-1] == '*'){
                        a[i][j] += 1;
                    }
                    if(a[i][j+1] == '*'){

                        a[i][j] += 1;
                    }
                    if(a[i-1][j]=='*'){

                        a[i][j] += 1;
                    }
                    if(a[i-1][j+1] == '*'){

                        a[i][j] += 1 ;
                    }
                    if(a[i-1][j-1] == '*'){

                        a[i][j] += 1 ;
                    }
                    if(a[i+1][j] == '*'){

                        a[i][j] += 1;
                    }
                    if(a[i+1][j-1] == '*'){

                        a[i][j] += 1 ;
                    }
                    if(a[i+1][j+1] == '*'){
                        a[i][j] += 1 ;
                    }

                    else continue;
                }

            }

        }
        cout << "Field #" << count<< ":\n";
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){

                cout << a[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}
