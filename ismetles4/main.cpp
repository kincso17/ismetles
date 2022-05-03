#include <iostream>

using namespace std;
int digit(int n){
    int first= n/10;
    int last =n%10;
    if(first>last){
        return last*10+first;
    }else{
        return first*10+last;
    }
}
int main()
{
   int n, m, x, counter=0;
   int stat[100]={0};
   ifstream in("numere.in");
   in>>n>>m;
   for(int i=0; i<n; i++){
    in>> x;
    int nr=digit(x%100);
    stat[nr]++;

   }
   for(int i=0; i<m; i++){
        in>>x;
   int nr=digit(x%100);
   counter += stat[nr];
   }
   cout<< counter << endl;
   /* int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    int a=x;
    int b=y;
    x=x%100;
    y=y%100;
    if(x==y){
        cout << a << " ";
        cout << b;
    }
    int szamjegy, ujszam;
    while(x>0){
    szamjegy=x%10;
    x=x/10;
    ujszam=ujszam *10+szamjegy;
    }*/

    return 0;
}
