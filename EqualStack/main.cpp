//Equal Stack - 07-05-2016
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    int sum1=0, sum2=0, sum3=0;
    
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
        cin >> h1[h1_i];
        sum1 += h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
        cin >> h2[h2_i];
        sum2 += h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
        cin >> h3[h3_i];
        sum3 += h3[h3_i];
    }
    
    bool done = false;
    int j=0,k=0,l=0;
    
    while (!done){
        if (sum1 == sum2 && sum2 == sum3){ //Ending condition.
            done= true;
            printf("%d", sum1);
        }
        else if(sum1<0 || sum2<0 || sum2<0){ //Stack height=0
            done = true;
            printf("0");
        }
        else{ 								//Find biggest height
            if(sum1 >= sum2 && sum1 >= sum3){
                sum1-=h1[j];
                j++; //tracking stack1
            }
            else if (sum2 >= sum1 && sum2 >= sum3){
                sum2-=h2[k];
                k++; //tracking stack2
            }
            else{						//stack3 is the highest
                sum3-=h3[l];
                l++; //tracking stack3
            }  
        } 
    }
    return 0;
}
