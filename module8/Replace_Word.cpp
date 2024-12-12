#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 

	int t; 
	cin>>t;

	while(t--){
		
	string x,y;
 
	cin>>x>>y;

	string output = "#"; 

	
	size_t pos = x.find(y); 

	while (pos != string::npos) { 
		
		x.replace(pos, y.size(), output); 

		pos = x.find(y, pos + output.size()); 
	} 

	cout << x << endl; 
	}
	

	
}