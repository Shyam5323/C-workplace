#include <iostream>
using namespace std;

int main(){
    int data[10]{1,3,6,3,9,3,5,7,2,11};
    unsigned int offset{3};
    int* p_data{data};
    unsigned int cnt{};
    for (size_t i{0}; i<offset ; i++){
        cnt++;
        if (i==offset){
            break;
        }
    }
    std::cout<<"The element is "<<cnt<<" slots away from the beginning is : "<<*(p_data+cnt);
}