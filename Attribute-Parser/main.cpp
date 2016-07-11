/*
String - 07/08/2016
The below code does the following:
  1. Input HRML code (string vector)
  2. Input QUER queries (string vector)
  3. Create a map m (storing all possible valid queries)
  4. Create a vector tag (to store the tag heirarchy)
  5. Read the HRML code line by line, remove double quotes and closing tag
      a. If closing tag, "
      b. Else, Extract the tag, attribute and value (stringstream).
      c. Add the tag to the tag heirarchy (check if there is a parent tag, if so, the tag would be ., else only
      d. Add the tag~attribute key to the map and assign value to it
      e. Check for any additional attribute-values in the line and extract them and add them to the map. NOTE - tag is the same as previous step
  6. Loop through the queries and check if the query as a key is present in the map, if so print the value, else print Not Found
*/
#include <iostream>
#include <map>
#include <vector>
#include <strime>

using namespace std;
int main(){
  int n, q,i;
  cin>>n>>q;
  string temp;
  vector<string> hrml;
  vector<string> quer;
  cin.ignore();
  
  for(i=0;i<n;i++){
      getline(cin,temp);
      hrml.push_back(temp);
  }
  for(i=0;i<q;i++){
      getline(cin,temp);
      quer.push_back(temp);
  }
  
  map<string, string> m;
  vector<string> tag;
  
  for(i=0;i<n;i++){
      temp=hrml[i];
      temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
      temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());
  
      if(temp.substr(0,2)=="</"){
          tag.pop_back();
          //cout<<"\nempty";
      }
      else{
          //cout<<<<endl;
          stringstream ss;
          ss.str("");
          //ss<<(temp.substr(0,temp.size()-2));
          ss<<temp;
          string t1,p1,v1;
          char ch;
          ss>>ch>>t1>>p1>>ch>>v1;
          //size_t = v1.find("")
          //cout<<"t1: "<<t1<<" p1: "<<p1<<" v1: "<<v1<<endl;
          string temp1="";
          if(tag.size()>0){
              temp1=*tag.rbegin();
              temp1=temp1+"."+t1;
          }
          else
              temp1=t1;
          tag.push_back(temp1);
          m[*tag.rbegin()+"~"+p1]=v1;
          //cout<<"Tag: "<<*tag.rbegin()<<endl;
          while(ss){
              ss>>p1>>ch>>v1;
              m[*tag.rbegin()+"~"+p1]=v1;
          }
      }
  
  }
  
  
  
  for(i=0;i<q;i++){
      if (m.find(quer[i]) == m.end())
          cout << "Not Found!\n";
      else
          cout<<m[quer[i]]<<endl;
  }
  
  return 0;
  }
