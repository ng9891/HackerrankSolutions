//Operator Overloading - 07/08/2016

#include<iostream>
#include<string>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

//Code
Complex operator + (const Complex& a, const Complex& b){
	Complex temp;
	temp.a = a.a + b.a;
	temp.b = a.b + b.b;
	return temp;
}

ostream& operator << (ostream& stream, const Complex& z){
	stream<<z.a<<"+";
	stream<<"i"<<z.b;
	stream<<endl;
	return stream;
}


int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
