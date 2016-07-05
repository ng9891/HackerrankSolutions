07/05/2016
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int count=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
	count = 0;
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
           if (a[a_i] <= 0)
           count++; // count student that arrived early.
        }
	if (count < k)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
    }
    return 0;
}
