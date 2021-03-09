#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int day, month, year;
    int day2, month2, year2;
    int monthDiff, dayDiff, yearDiff, Diff;
    
    cin>>day>>month>>year;
    cin>>day2>>month2>>year2;

    monthDiff = month - month2;
    dayDiff = day - day2;
    yearDiff = year - year2;
    Diff=(year-year2>0)?10000:(month-month2>0&&yearDiff==0)?monthDiff*500:(day-day2>0 &&yearDiff==0)?dayDiff*15:0;    
    cout<<Diff<<endl;

    return 0;
}
