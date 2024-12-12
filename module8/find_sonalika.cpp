#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    bool value=false;
    while(ss>>word){
      if(word=="shonalika"){
        value=true;
      }
    }
    if(value){
        cout<<"YES";
    }
    else cout<<"FALSE";
    return 0;
}