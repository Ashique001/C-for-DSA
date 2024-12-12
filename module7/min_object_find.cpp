#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int marks;

};
int main(){
    int n;
    cin>>n;
    
     Student a[n];
    
    for(int i=0;i<n;i++){
        
       
        cin>>a[i].name >>a[i].age>>a[i].marks;
        
    }
    // for minimum marks 
    Student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].marks<mn.marks){
            mn=a[i];
        }
    }
     cout<<mn.name<<" "<<mn.age<<" "<<mn.marks<<endl;
     
    //  for maximum marks;


    // Student mx;
    // mx.marks=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(a[i].marks>mx.marks){
    //         mx=a[i];
    //     }
    // }
    // cout<<mx.name<<" "<<mx.age<<" "<<mx.marks<<endl;
    return 0;
}