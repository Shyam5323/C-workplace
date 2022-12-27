#include <iostream>
using namespace std;
int main(){
    int data[10]{11,2,52,53,9,13,5,7,12,11};
    int *min_address{};
    int min{*(data)};
    for (int i{0} ; i<size(data) ; i++){
        if(*(data+i)<min){
            min_address = data + i;
            min=data[i];
        }
    }
    cout<<min_address;

}