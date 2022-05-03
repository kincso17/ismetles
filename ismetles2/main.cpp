#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Kerem a szoveget:";
    getline(cin, str);
    size_t found =str.find("a");
    while (found != string::npos){
        str.replace(found, 1, "aA");
        found = str.find("a", found+2 );

    }

    size_t found1 =str.find("e");
    while (found1 != string::npos){
        str.replace(found1, 1, "eE");
        found1 = str.find("e", found1+2 );
    }

    size_t found2 =str.find("i");
    while (found2 != string::npos){
        str.replace(found2, 1, "iI");
        found2 = str.find("i", found2+2 );
    }

    size_t found3 =str.find("o");
    while (found3 != string::npos){
        str.replace(found3, 1, "oO");
        found3 = str.find("o", found3+2 );
    }

    size_t found4 =str.find("u");
    while (found4 != string::npos){
        str.replace(found4, 1, "uU");
        found4 = str.find("u", found4+2 );
    }

    cout << str;

    return 0;
}
