#include <iostream>
using namespace std;
//You can swap data using loops but its too long.
//You can also swap data by exchanging pointers. By assigning array name to modifiable pointer.

int main(){
    int array1[5]{1,2,3,4,5};
    int array2[5]{4,5,6,7,8};
    int* ptr{nullptr}; //temp
    int* p_array1{array1};
    int* p_array2{array2};
    ptr = p_array1;
    p_array1 = p_array2;   
    p_array2 = ptr;
    cout<<"USing array index : "<<endl;
    for (size_t i; i<size(array1); i++){
        cout<<p_array1[i]<<endl; 
    }
    cout<<endl;
    cout<<"Using pointer arithmetic : "<<endl;
    for (size_t i; i<size(array1); i++){
        cout<<*(p_array1+i)<<endl;
    }
}