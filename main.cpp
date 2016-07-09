//Variable sized arrays - 07/08/16 - No vector;
#include <iostream>
using namespace std;

int main() {
	int n, q , num, k;   
    cin>>n>>q;
    int **s = new int*[n]; //2D array; s[rowCount]
    for (int i=0; i<n; i++){
		cin>>k;
		s[i] = new int[k]; //s[colCount]
		for (int j=0; j<k; j++){
			cin>>num;
			s[i][j]=num;
		}	
	}
    int a,b;
    for(int i=0; i<q; i++){
        cin>>a>>b;
        printf("%d\n", s[a][b]);   
    }
    for (int i = 0; i < n; ++i)
        delete[] s[i];

    return 0;
}
