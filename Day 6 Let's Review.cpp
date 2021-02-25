#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int values;
    cin>>values;
    
    while(values--){
        string str0, str1, str2;
        cin>>str0;
        for(int i = 0; i<str0.size();i++){
            if(i%2==0){
                str1 = str1 + str0[i];
            }else if(i%2!=0){
                str2 = str2 + str0[i];
            }
        }
        cout<<str1<<" "<<str2<<endl;
    }
    return 0;
}
