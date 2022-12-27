#include <iostream>
#include <bitset>
using namespace std;
int main(){
    unsigned short int value {0xff0u};
    cout<<sizeof(short int)<<endl;
    cout<<bitset<16>(value)
    <<"dec : "<<value<<endl;
    value = static_cast<unsigned short int>(value << 1);
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl;
    value = static_cast<unsigned short int>(value << 1);
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl;
    value = static_cast<unsigned short int>(value << 1);
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl;
    value = static_cast<unsigned short int>(value << 1);
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl;
    value = static_cast<unsigned short int>(value << 1);
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl; // value decreases as 1 is lost by shifting left
    value = static_cast<unsigned short int>(value >> 1);//Shift right
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl; // But the lost 1 doesnt come back
    //Shift multiple times'
    value = static_cast<unsigned short int>(value >> 4); //4 times
    cout<<"value : "<<bitset<16>(value)
    <<", dec : "<<value<<endl; //Divided by 2^n that is 16
    return 0;
}