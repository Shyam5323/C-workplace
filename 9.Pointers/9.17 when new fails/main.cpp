#include <iostream>
using namespace std;
int main(){
   /* int *data = new int[10000000000];
    cout<<"built well"<<endl;
    return 0;*/

    //two method to avoid failure
    //exception 
    //no throw
    try{
        int *data = new int[10000000000];
        cout<<"built well"<<endl;
    }catch(exception& ex){
        cout<<"Somnething went wrong"<<ex.what()<<endl;
    }
    cout<<"built well"<<endl; 

    //nothrow

    for (size_t i {0}; i<100; i++){
        int * data = new(nothrow) int [10000000000];
        if (data!=nullptr){
            cout<<"Data allocated"<<endl;
        }else{
            cout<<"Not allocated"<<endl;
        }
        }
    }
