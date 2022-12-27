#include <iostream>
using namespace std;
int main(){
     double x{12.5};
     double y{34.6};
     int sum = x+y; //first add then implicitely convert to int
     cout<<"Sum is : "<<sum<<endl;
     sum = static_cast<int>(x) + static_cast<int>(y); //first extensively change to int then add
     cout<<"The sum is "<<sum <<endl;
     sum = static_cast<int>(x+y);
     cout<<"The sum is "<<sum <<endl;
     //old method
     double pi{3.14};
     int int_pi = (int)(pi);
     cout<<pi<<endl;
    return 0;
}