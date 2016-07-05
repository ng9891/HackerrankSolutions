#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t; 
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        bool done = false;
        int n, amountFives, amountThrees;
        cin >> n;
        amountFives = n;
        amountThrees = 0;
        
        while (!done){
            if(amountFives % 3 == 0 && amountThrees % 5 == 0)
                done = true;
            else{
                if(amountFives - 5 < 0){
                    amountFives = 0;
                    amountThrees = 0;
                    done = true;
                }
                else{
                    amountFives -= 5;
                    amountThrees += 5;
                }
                    
            }
            
        }
        
        if(amountFives + amountThrees == 0)
            printf("-1\n");
        else{
            for (int i=0; i<amountFives; i++)
                printf("%d",5);
            for (int i=0; i<amountThrees; i++)
                printf("%d",3);
            cout<<endl;
        }
           
        
    }
    return 0;
}
