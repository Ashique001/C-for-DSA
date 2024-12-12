#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s; 
    getline(cin,s);

    stringstream ss(s);
    string word;

    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    bool value  =false ;
    while(ss>>word){
        // cout<<word<<endl;
        if(word=="Jessica"){
            value= true;
        }
    }

    if(value){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}