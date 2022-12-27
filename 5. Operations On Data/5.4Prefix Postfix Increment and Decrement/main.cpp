#include <iostream>
using namespace std;
int main(){
    int value{5};
    //Increment By 1
    value=value+1; //6
    cout<<value<<endl;
    value=5; //reset
    //Decrement by 1
    value=value-1;//4
    cout<<value<<endl;

    cout<<value++<<endl<<++value<<endl;
    //value++ increases value afterwards, and latter does it instantly
    // value++ and --value works same as above for decrement


    return 0;
}