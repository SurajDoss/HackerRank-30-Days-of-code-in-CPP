#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sum;
    vector<int> possibleSum;
    /*
    A B C
      D
    E F G 
    */
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            sum = 0;
            sum +=sum;
            sum += arr[i][j];// Pos A
            sum += arr[i][j+1];// Pos B
            sum += arr[i][j+2];// Pos C
            sum += arr[i+1][j+1];// Pos D
            sum += arr[i+2][j+0];// Pos E
            sum += arr[i+2][j+1];// Pos F
            sum += arr[i+2][j+2]; //Pos G
            possibleSum.push_back(sum);
        }
        
    }
    
    cout<<*max_element(possibleSum.begin(),possibleSum.end())<<endl;
 return 0;
}
