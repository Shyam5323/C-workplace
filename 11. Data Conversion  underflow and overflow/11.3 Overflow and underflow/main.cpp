#include <iostream>
using namespace std;
//for eg- if limit is 255, then at 256 goes to -0 again overflows 
int main(){
    //overflow
    unsigned char data{250};
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    ++data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    //underflow
    data=1;
    --data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    --data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;
    --data;
    cout<<"Data: "<<static_cast<int>(data)<<endl;   
}