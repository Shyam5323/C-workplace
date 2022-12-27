#include <iostream>
using namespace std;
int main(){
    int x{},a{},b{};
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    cout<<"1.Add \n 2.Sub \n 3.multiply \n 4.Divide:";
    cin>>x;
    if (x==1){
        cout<<"SUm is: "<<a+b<<endl;
    }
    else if (x==2){
        cout<<"Difference is: "<<a-b<<endl;
    }
    else if (x==3){
        cout<<"Product is: "<<a*b<<endl;
    }
    else if (x==4){
        cout<<"quotient is"<<a/b<<endl;
    }

}