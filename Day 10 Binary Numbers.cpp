#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter(0),max(0);
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n){
        if(n&1){
            counter++;
        }else{
            counter=0;
        }
        if(max<counter){
            max=counter;
        }
        n = n>>1;
    }
    cout<<max;
    return 0;
}
