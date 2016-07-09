//Simple Inheritance - 07/08/2016
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        virtual void putdata(){}
        virtual void getdata(){}
};

class Professor:public Person{
    int publication, curr_id;
    public:
        static int id1; //Count of Student Professor Object;
        Professor(){ id1++; curr_id=id1;}
        void getdata(){ 
            cin>>name>>age>>publication;
        }
        void putdata(){ printf("%s %d %d %d\n",name.c_str(),age,publication,curr_id);}
    
};

class Student:public Person{
    int mark[6], total, curr_id;
    public:
        static int id2; //Count of Student Object;
        Student(){ total=0; id2++; curr_id=id2;}
        
        void getdata(){ 
            cin>>name>>age;
            for(int i=0; i<6; i++){
                cin>> mark[i];
                total += mark[i];
            }    
        }
        void putdata(){ printf("%s %d %d %d\n",name.c_str(),age,total,curr_id);}
    
};

int Student::id2 = 0;
int Professor::id1 = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person ** per;
	per = new Person*[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor();

        }
        else per[i] = new Student(); // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
