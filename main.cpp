

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	int long n, m , s, ss, mm;
    cin>>t;
    
    for (int i=0; i<t; i++){
		cin>>n>>m>>s;

        ss = m%n;

		if (ss== 0) //Case when mod gives a 0.
			ss=n;
        
        if (ss + s-1 > n) //when m%n + s-1 is bigger than # of prisoners.
			ss = ss - (n - (s-1)); 

		else
            ss = ss + s-1; // 2%5=2 | 2 + (1-1) = 2.
        
		cout<<ss<<endl;
        
        
    }
	/* from web. Very interesting.
	int te;	
	cin >> te;
	while (te--){
		int n, m, s;	cin >> n >> m >> s;	
		s--;
		m = m%n;	//Calculate Position after couple of circles. Error possibility when m%n =0. So we do next.
		s = (s + m) % n; // s = StartPrisonerNumber + Pos % #ofPrisoners. If "pos" m = 0, then we have the Prisoner Id cause s-1.
						//If s+m > n. Then we will know the position after the mod from the starting id prisoner "s".
		s = (s + n - 1) % n; // add them together and mod again to get the exact prisoner ID number. n-1 in case previous operation = 0.
		cout << s + 1 << "\n";
	}
	*/

	/* only work for small numbers.
    int t;
	int long n, m , s, ss;
	cin>>t;
    
	do{
		cin>>n>>m>>s;//Input starting prisonerID;

		int * a = new int [n];
		for (int i =0; i<n; i++)
			a[i]= i+1;

		ss= s-1; //array index we are starting from. a[ss]= s as s starts from 1.
        for (int j=0; j<m-1; j++){ //Sweets. m-1 cause we have the warn the prisoner before.
			ss++;
			if(ss >= n)
				ss=0;
			cout<< "ss= " << ss<< endl;
        }

		cout<< "outss= " << ss<< endl;
		cout<< "Prisoner: "<< a[ss]<<endl;
		t--;
		delete [] a;
	}
	while(t>0); //# of cases

	*/

    return 0;
}