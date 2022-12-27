#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float num1{1.12345678912345678f};//Need to put f suffix and precision is 7
    double num2{1.12345678912345678};//precision:15
    long double num3{1.123456789123456781L};//L suffix Precision:20
    long double num4{1.232e19};//10-exponential
    //Sizes
    cout<<sizeof(float)<<num1<<endl;
    cout<<sizeof(double)<<num2<<endl;
    cout<<sizeof(long double)<<num3<<endl;

    //Precision
    cout<<setprecision(20);
    cout<<"num1 is: "<<num1<<endl;
    cout<<"num2 is: "<<num2<<endl;
    cout<<"num3 is "<<num3<<endl;

    //Infinity and Nan

    float num5{5.0};
    float num6{0.0};
    float num7{num5/num6};
    cout<<num7<<endl; //Infinity
    float num8=0.0;
    float num9{num6/num8};
    cout<<num9<<endl;


    
}