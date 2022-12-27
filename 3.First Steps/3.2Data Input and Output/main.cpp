#include <iostream>
#include <string>
using namespace std;
/*string a;
int main(){
    cout<<"Enter full name: "<<endl;
    cin>>a;
    cout<<a<<endl;
    cerr<<"Something went wrong"<<endl;
    clog<<"Log Message";

    int age;
    string name;
    cout<<"Enter your name and age: "<<endl;
    cin>>name>>age;
    cout<< "your name is "<<name<<" ANd age is "<<age;

    return 0;
} */

int main(){
    int age1;
    string fullname;
    cout<<"Enter full name and age"<<endl;
    std::getline(std::cin,fullname);
    cin>>age1;
    cout<< "your name is "<<fullname<<" ANd age is "<<age1<<endl;
    return 0;
}
