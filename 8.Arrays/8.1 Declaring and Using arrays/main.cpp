#include <iostream>
using namespace std;
int main(){ //declare array
    int scores[10]; //Array with 10 int space - Junk data
    cout <<'scores[0]'<<scores[0]<<endl;

    //Reading zrray with loops
    /*for (size_t i{0};i<=11;i++){
        cout<<"Score["<<i<<']'<<scores[i]<<endl;
    }
    return 0;*/

    //Write array with values
   /*scores[0]=20;
    scores[1]=10;
    scores[2]=100;
    //print dta
    for (size_t i{0};i<=11;i++){
        cout<<"Score["<<i<<']'<<scores[i]<<endl;
    }
    return 0;*/

    //Declare and initialize
    double salaries[5]{1.2,1.2,2.2,3.2};
    for (size_t i{0};i<=5;i++)
    {
        cout<<salaries[i]<<endl;
    }

    int abc[]{1,2,3,4,5,6}; //dont need to specofy size
    for (auto value:abc){ //range based for loop
        cout<<value<<endl;
    }

}