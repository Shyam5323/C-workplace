#include <iostream>
#include <bitset>
using namespace std;
int main(){
    unsigned short int data{15};
    cout<<"decimal"<<showbase<<dec<<data<<endl;
    cout<<"octal"<<oct<<showbase<<data<<endl;
    cout<<"hexadecimal"<<showbase<<hex<<data<<endl;
    cout<<"binary"<<bitset<16>(data)<<endl;
}