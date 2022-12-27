#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x{5.355};
    cout<<"Rounded to cieling"<<ceil(x)<<endl;
    cout<<"Rounded to floor : "<<floor(x)<<endl;
    //abs
    double y{-500};
    cout<<"Absolute of -500 is "<<abs(y)<<endl;
    cout<<"Abso of 5.355 is "<<abs(x)<<endl;
    //exponential
    cout<<"Expo of 10 is : "<<exp(10)<<endl;
    //pow
    cout<<pow(3,4);
    return 0;
}