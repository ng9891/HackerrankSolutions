//StringStream examples - 07/10/2016
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss(str);
    char ch;
    vector<int> temp;
    int a;
    while(!ss.eof()){
        ss>>a;
        temp.push_back(a);
        ss>>ch;
    }
    
    return temp;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
