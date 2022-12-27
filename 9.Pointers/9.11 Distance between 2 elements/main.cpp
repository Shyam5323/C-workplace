#include <iostream>
using namespace std;
int main(){
    //special type used for difference
    //std::ptrdiff_t
    int scores[10]{11,12,13,14,15,16,17,18,19,20};
    //Can store using array index notation
    // int *pointer1 {&scores[0]};
    //int *pointer2 {&pointer[8]};

    //using pointer arithmetic notation
    int *pointer1 {scores+0};
    int *pointer2 {scores+8};
    cout<< "pointer2 - pointer1 : "<< pointer2 - pointer1<<endl;
    ptrdiff_t diff = pointer2 - pointer1;
    cout<<endl<< diff;
}