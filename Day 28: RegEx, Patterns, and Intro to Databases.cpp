#include <bits/stdc++.h>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

bool ending(string& s){
    string at = "@gmail.com";
    if(s.size()< at.size()){
        return false;
    }
    for (int i = s.size() -1, j= at.size()-1; i>=0 && j>=0; --i, --j ){
        if(s[i]!= at[j]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;

    cin>>n;
    vector <string> ans;
    for(int i = 0; i<n; i++){
        string firstName;
        string emailid;
        cin>> firstName>> emailid;
        if(ending(emailid)){
            ans.push_back(firstName);
        }
    }
    
    sort(ans.begin(),ans.end());
    for(int j= 0; j<ans.size(); ++j){
        cout<< ans[j]<< endl;
    }
}
