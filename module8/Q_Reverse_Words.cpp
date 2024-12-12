#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    bool firstword=true;
    while(ss>>word){
      reverse(word.begin(),word.end());
      if(firstword==false){
        cout<<" ";
      }
      cout<<word;
      firstword=false;
    }
    return 0;
}