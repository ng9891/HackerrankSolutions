//Cut the stick - 07/07/2016
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	// /* Solution #1 - Brute force. Bad Solution.
    int n, k, num;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.end());
    num = arr.size();
    while (num > 0){
		cout<<num<<endl;
        for (int i = 0; i<n; i++){
            if(arr[i]>0){
               // find smallest number that is not 0.
                k = arr[i]; //k has the smallest number.
                break;
            }   
        }
        for(int i = 0;i < n;i++){
            if (arr[i]>0){
                arr[i] -= k;
                if (arr[i]==0){
                    num--;
                    arr[i]=-1;
                }
            }          
        }
    }
	//*/
	
	/* Solution #2 - Smart Solution. Good Solution.
	int N; 
    
    cin >> N;           // Taking the number of elements from user's input.
    cout << N << endl;  // Printing the number of our elements since our output will start with number of the full list.
    
    int Array[N];
    
    for (int i = 0; i < N; i++) 
        cin >> Array[i];            // Taking all elements in to our Array.
    
    sort(Array, Array + N);         // Sorting list from minimum to maximum.
    
    for (int i = 0; i < N-1; i++)       
        if (Array[i] != Array[i+1])     
            cout << N-(i+1) << endl; // Printing our output by subtracting number of smallest item/items from our lenght of array.
	*/
    return 0;
}