#include <iostream>
//Runs the body and then checks
using namespace std;
int main(){
    int count{0}; //runs 1 time even though count=0.
    size_t i{0};
    do{
        cout<<i<<" I love C++"<<endl;\
        ++i;
    }while(i<=count);
    return 0;
}