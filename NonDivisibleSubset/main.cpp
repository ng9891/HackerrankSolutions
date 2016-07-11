//Non-divisible-subset  -  07/10/2016
/*Explanation:
    For any number K, the sum of 2 values (A & B) is evenly divisible by K if the sum of A%K + B%K is equal to K.
    EG. K=5. Remainder are 1+4 and 2+3.
    Take the biggest set between remainders 1 and 4. Also, take the biggest set between 2 and 3 and add them together.
    
    Given that the remainders are individually divisible by K (remainder =0), they can't be paired with any others that are the same. 
    So, at most 1 number which is evenly divisible by K can be added to the result set.
  
    Same can be said to K's that are even.
    EG. K=6. We should at most one number of remainders 3. cause of 3+3. Remainders additions= 1+5 , 2+4, 3+3.
    
    Therefore, if remainder ==0, add a number to the result subset and if k%remainder == 0, add another number to the result subset.
    
*/
#include <iostream>
using namespace std;


int main() {
    int n, k;
    int count = 0;
    cin>>n>>k;
    int a[k]={0}; //Array counting the remainders of K.
                  //EG. K=5. Remainder: 0 1 2 3 4
    
    for(int i=0; i<n; i++){
        int num,index;
        cin>>num;
        index = num%k;
        a[index]+=1; //e.g. a[remainder2]= +1
    }
    /*
    for(int i=0; i<k; i++){
        cout << a[i]<<" ";
    }
    */
    if(a[0]>0)  //At least 1 in the element with remainder 0
        count++;
    if(k%2==0)  //At least 1 in the case where remainders are equal. EG. k=6. 3+3.
        count++;
    
    int j=k-1;
    for(int i=1; i<j; i++){ //Compare remainders and take the biggest. K=5. 1+4, 2+3.
        if (a[i] > a[j])
            count += a[i];
        else
            count += a[j];
        j--;
    }
    
    cout << count;  //Print how big the subset should be; as we dont have to print the values of the subset.
    
    return 0;
}
