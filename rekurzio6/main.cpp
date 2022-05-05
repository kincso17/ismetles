#include <iostream>

using namespace std;

int szamjegy(int n){
    if(n==0){return 0;}
    return 1+szamjegy(n/10);

}
int main()
{
    cout << szamjegy(13) << endl;
    return 0;
}
