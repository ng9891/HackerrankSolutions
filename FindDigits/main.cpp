//Find Digits - 07/08/16
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, count=0, num, k;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        k =n;
        count = 0;
        while (n>0){ 
            num = n%10;
            if (num > 0 && k%num == 0){
                count++;
            }
            n /=10;
        }
        printf("%d\n", count);
    }
    return 0;
}
