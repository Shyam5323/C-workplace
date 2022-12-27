#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if (age>= 21 and age<=39){
        cout<<"Eligible"<<endl;
    }
    else{cout<<"Not Eligible";}
    return 0;
}