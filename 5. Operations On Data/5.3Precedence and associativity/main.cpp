#include <iostream>
using namespace std;
int main(){
    int a{2};
    int b{3};
    int c{4};
    int d{4};
    int e{2};
    int f{1};
    int g{9};
    int result = a+b*c-d/e-f+g;  //Multiply=Divide=Modulus- Left To Right
    cout<<result<<endl; //Add=Subtract- left to rigt
    return 0;
}