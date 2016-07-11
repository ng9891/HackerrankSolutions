//Minimum Distance - 07/10/2016
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    int min, dist=0;
    min= n;
    
    for (int i = 0; i < n; i++){
        for (int j=i+1; j<n; j++){
            if(A[j]==A[i]){
                dist = abs(j-i);
                if(dist < min)
                    min=dist;
            }
        }
        
    }
    if (dist == 0)
        cout<<"-1"<<endl;
    else
        cout<<min<<endl;
    
    
    return 0;
}
