#include<bits/stdc++.h>
using namespace std;

vector<string> v2;
bool isLeapYear(int year) {
    return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}

bool isSpecialLeapYear(int year) {
    return year > 0 && year % 3328 == 0;
}

bool isValidDate(string d, string m, string y) {
    
    int day = stoi(d), month = stoi(m), year = stoi(y);
    
    if (year <= 0) 
        return false;
      
    if (month < 1 || month > 12) 
        return false;
      
            
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    } 
    if (isSpecialLeapYear(year)) {
        daysInMonth[1] = 30;
        //cout << "SL";
    }

    return day >= 1 && day <= daysInMonth[month - 1];
}


int main() {
    string yyyy, mm, dd , v1;
    vector<string> ls;
    cin >> yyyy >> mm >> dd;
    v1 = yyyy + mm + dd;

    sort(v1.begin(), v1.end());

    do {
        string d, m, y;
        y = v1.substr(0,4);
        m = v1.substr(4,2);
        d = v1.substr(6,8);

        if (isValidDate(d,m,y)) {
            v2.push_back( y+" "+m+" "+d);
        }
    } 
    while (next_permutation(v1.begin(), v1.end()));
   
    cout << v2.size() <<endl;
    for(string str: v2) 
        cout << str <<endl;
 return 0;
}