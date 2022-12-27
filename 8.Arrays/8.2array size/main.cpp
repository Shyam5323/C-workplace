#include <iostream>
using namespace std;
int main(){
    int abc[]{1,2,3,4,5};
    /*int count= sizeof(abc)/sizeof(abc[0]); //Size of array / size of element = number of element
    for(int i{0};i<count;i++){
        cout<<abc[i]<<endl;
    }*/

    //Using size
    for (int i{0};i<size(abc);i++){
        cout<<abc[i]<<endl;
    }

    //Using range for loop
    for (auto count:abc){
        cout<<count<<endl;
    }



    return 0;
}