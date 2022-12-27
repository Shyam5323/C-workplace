#include <iostream>
using namespace std;
int main(){
    int num[]{1,2,3,4,5,6};
    //cout<<num[10]<<endl;
    num[1000]=100;
    cout<<num[1000];
    return 0;
}