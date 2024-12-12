#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    //  char name[100];
    string name;
    int age ;
    float cgpa;
};
int main(){
Student a,b;
// a.name="Ashique Billah";
// char x[100]="ashique billah";
// strcpy(a.name,x);
// cin.getline(a.name, 100);
getline(cin,a.name);
cin>>a.age;
cin>>a.cgpa;
cin.ignore();
// getchar();
// cin.getline(b.name,100);
// cin.getline(b.name, 100);
// cin>>b.name;
getline(cin,b.name);
cin>>b.age;
cin>>b.cgpa;


cout<<a.name<<" "<<a.age<<" "<<a.cgpa<<endl;
cout<<b.name<<" "<<b.age<<" "<<b.cgpa<<endl;
    
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string name;
//     int age;
//     float cgpa;
// };

// int main() {
//     Student a, b;

//     // Input for student a
//     cin >> a.name;
//     cin >> a.age;
//     cin >> a.cgpa;
    
//     // Ignore the newline character left in the input buffer
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     // Input for student b
//     getline(cin, b.name); // Now this will work correctly
//     cin >> b.age;
//     cin >> b.cgpa;

//     // Output
//     cout << a.name << " " << a.age << " " << a.cgpa << endl;
//     cout << b.name << " " << b.age << " " << b.cgpa << endl;

//     return 0;
// }
