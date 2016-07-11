//Map-Unordered Map - 07/09/2016
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	map<string,string> test;

	unordered_map<string, string> utest;

	test["Hello"] = "Bye";
	test["Annyeong"] = "Annyeong";
	test["Hola"] = "Adios";

	utest["Hello"] = "Bye";
	utest["Annyeong"] = "Annyeong";
	utest["Hola"] = "Adios";

	string in;
	cout<<"Please input Hello or Annyeong or Hola: ";
	cin>>in;

	if( test.find(in) != test.end())
		cout<<test.find(in)->second<<endl;
	
	for(map<string,string>::const_iterator it = test.begin();
					it != test.end(); ++it)
	{
		cout << it->first << " " << it->second<< "\n";
	}

	for(unordered_map<string,string>::const_iterator it = utest.begin();
					it != utest.end(); ++it)
	{
		cout << it->first << " " << it->second<< "\n";
	}

	//Phonebook
	cout<<"\n\n\n\nPhoneBook example!"<<endl;
	/*Input example
	3				//Number of inputs.
	sam 99912222	//Name and phone number
	tom 11122222
	harry 12299933
	sam				//Queries.
	edward
	harry

	*/
	int n;
    cin>>n;
    string name, number;
    map<string,string> pBook;
    for(int i= 0; i<n; i++){
        cin>> name>> number;
        pBook[name]= number;
    }
    
    getline(cin,name); //get rid of \n in cin.
    while (getline(cin, name))
    {
        
        if( pBook.find(name) != pBook.end())
            cout << pBook.find(name)->first << "="<<pBook.find(name)->second<<endl;
        else
            cout<<"Not found\n";
    }

	
    return 0;
}
