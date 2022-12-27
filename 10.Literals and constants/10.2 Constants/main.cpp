#include <iostream>
using namespace std;
int main(){
    int age{34};
    const int age1{34};
    // const int a; -- error because const needs to be initialised.
    cout<<age<<endl<<age1<<endl;
    //age1=2; --- gives error cant be modified
    return 0;
}