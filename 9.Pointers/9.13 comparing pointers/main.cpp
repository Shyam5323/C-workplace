#include <iostream>
using namespace std;
int main(){
    int scores[10]{1,2,3,4,5,6,7,8,9,10};
    int *pointer1 {&scores[2]};
    int *pointer2 {&scores[5]};
    cout<<boolalpha<<endl;
    cout<<"Pointer1 > pointer 2 : "<<(pointer1>pointer2)<<endl;
    cout<<"Pointer1 < Pointer2 : "<<(pointer1<pointer2)<<endl;
    //......so on

}