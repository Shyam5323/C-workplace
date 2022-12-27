#include <iostream>
using namespace std;
const int val1{33};
constexpr int val2 {34};
int val3 {35};
constinit int age{88};
const constinit int age1{val1}; //const and constinit can be combined
constinit age2{age1}; //but initialising with age would give error as it isnt const
//constinit age3{val3}; // Val3 isnt evaluated at compile tine

//cant combine constexpr and constinit

int main(){
    //constinit int age4{40}; // Not static or thread local storage, i.e not outside main function
    return 0;
}


//need c++20 for thiss
