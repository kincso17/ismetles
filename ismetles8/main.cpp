#include <iostream>
#include <fstream>
using namespace std;

int sub(int n)
{
    int szamjegyek=0;
    int s=0;
    while(n>0){
        szamjegyek = n%10;
        s += szamjegyek;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    ifstream in("def.in");
    int echilibrat[1000], nr=0;
    for(int i=0; i<10; i++){
        in>>n;
        int ideiglenes=n;
        int p=0;
        int tomb[1000];
        while(ideiglenes>0){
            tomb[p]=n%10;
            p++;
            n=n/10;

        }
        if(p%2==0){

                int bal=0, jobb=0;
             for(int j=0; j<p/2; j++){
                bal +=tomb[j];
             }
            for(int j=p/2; j<p; j++){
                jobb +=tomb[j];
             }
             if(bal==jobb){
                echilibrat[nr]=n;
                nr++;
             }
        }
    }
    for(int m=nr; m>nr-2; nr--){
        cout<< echilibrat[m] << " ";
    }
    return 0;
}
