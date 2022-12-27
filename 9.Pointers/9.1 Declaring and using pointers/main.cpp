#include <iostream>
using namespace std;
int main(){
    int* point{}; // Will initialize with nullptr.... can use point{nullptr}
    double* fracpoint{nullptr};
    //Pointers are used for storing address of variable
    //'&' operator is used to access address of variable
    //Size of all pointers are same as they are all addresses
    //Pointers are 8 bytes

    int var{1};
    int* varp{&var};
    cout<<"VAriable: "<<var<<endl;
    cout<<"variable address :"<<varp<<endl;

    //Can then assign the pointerr to different variable address'

    int var1{2};
    varp=&var1;
    cout<<"New address = "<<varp;

    //dereferencing a pointer
    int* ptr{nullptr};
    int var3{55};
    ptr=&var3;
}