#include <iostream>
using namespace std;
//implicit data conversion - change type automatically
//when different types in expression
//done from smallest to largest 
int main(){
    double price{45.6};
    int units{10};
    auto total = price * units;
    cout<<total;
    cout<<endl<<sizeof(price)<<sizeof(units)<<sizeof(total)<<endl;
    //exception- assignmentm it narrows
    int x;
    double y{45.54};
    x=y;
    cout<<x; // converts to int
}
  