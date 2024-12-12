#include<bits/stdc++.h>
using namespace std;
void print(stringstream &ss){
    string word;
    if(ss>>word){
        
        print(ss);
        cout<<word<<endl;
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    /*1.(stringstream)for word by word access.
    2.now ss hold the string with space;*/
    print(ss);// print function called;
}