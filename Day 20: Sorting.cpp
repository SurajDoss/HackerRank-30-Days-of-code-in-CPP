#include <bits/stdc++.h>
#include <algorithm>
#include <utility>
#include <string_view>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int swaps = 0;
    for(int i = 0; i<n; i++ ){
        int counter(0);
        
        for(int j =0; j < (n-1); j++){
            if(a[j]> a[j+1]){
                swap(a[j+1], a[j]);
                counter++;
            }
        }
        swaps += counter;
    }
    cout << "Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    return 0;
}
