#include <iostream>
using namespace std;
int main(){
    for (size_t i{0}, x{5}, y{22}; y>15 ; ++i , x+=5, y-=1){
        cout<<"sizeof(i) : "<<sizeof(i)<<endl;
        cout<<"sizeof(x) : "<<sizeof(x)<<endl;
        cout<<"sizeof(y) : "<<sizeof(y)<<endl;
        cout<<"----------------------"<<endl;
        cout<<"(i) : "<<(i)<<endl;
        cout<<"(x) : "<<(x)<<endl;
        cout<<"(y) : "<<(y)<<endl;
        cout<<"----------------------"<<endl;
    }
    return 0;
}