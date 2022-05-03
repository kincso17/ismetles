#include <iostream>

using namespace std;

int main()
{
    int k,n, v[1000][1000];
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >>k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                v[i][j]=k*(i+1)-i;
            }else{
                v[i][j]=v[i][j-1]+1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                cout  << v[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}
