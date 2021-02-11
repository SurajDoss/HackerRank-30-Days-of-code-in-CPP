#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string str;

    cin>> a;
    cin >>b;
    cin.ignore();
    getline(cin,str);

    a= a+i;
    b= b+d;

    cout<< a<<endl;
    cout<< setprecision(1)<< fixed <<b<<endl;
    cout<< s<< str<< endl;

    return 0;
}
