#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int m1;
    int m2;

};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].age>>a[i].m1>>a[i].m2;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(a[i].m1+a[i].m2<a[j].m1+a[j].m2)
        {
            swap(a[i],a[j]);
        }
        if(a[i].m1+a[i].m2==a[j].m1+a[j].m2)
        {
        if(a[i].age<a[j].age){
            swap(a[i],a[j]);
        }
        }
    
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].m1<<" "<<a[i].m2<<endl;
    }

    return 0;
}