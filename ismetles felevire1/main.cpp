#include <iostream>

using namespace std;
 bool prim(int a){
    for(int oszto=2; oszto <a/2+1; oszto ++){
        if (a%oszto ==0){
            return false;
        }
    }
    return true;
}
int main()
{
 int a[100][100],n,m;
 cout<< "n=";
 cin>> n;
 cout << "m=";
 cin>> m;
 for(int i=0; i<=n; i++){
    for(int i=0; i<=m; i++){

    }
 }

    int a;
    cout << "a=";
    cin >> a;
    if(prim(a)==1){
        cout << "a szam prim";
    }else{
        cout << "a szam nem prim";
    }
    return 0;


}
