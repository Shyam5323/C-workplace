#include <iostream>
using namespace std;
int main(){
    int num1{65};
    int num2{60};
    bool result = (num1<num2);
    if(result==true){
        cout<<num1<<" Less than "<<num2<<endl;
    }
    if (!(result==true)){  //or result==false or result!=true
        cout<<num1<<" Greater than "<< num2<<endl;  // Or use else
    
    } 

    bool red{false};
    bool green = true;
    bool yellow{false};
    bool pol_stop{true};

    if (green){
        if (pol_stop){
            cout<<"Stop"<<endl; //Or if (green & !pol_stop)
        }
        else{
            cout<<"go"<<endl;

        }
        }
    
    return 0;
}