#include <iostream>
using namespace std;
int main(){
    short int var1{10}; //2 bytes
    char var2{40}; //1
    cout<<"size opf var 1 :"<<sizeof(var1)<<endl;
    cout<<"size of var 2 : "<<sizeof(var2)<<endl;
    auto result1= var1 * 2;
    auto result2= var2 * 2;
    cout<<result1<<result2;
    return 0;
}