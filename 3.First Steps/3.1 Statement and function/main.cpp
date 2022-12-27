#include <iostream>
using namespace std;
int AddNumber(int First_Parameter, int Second_Parameter)
{
    int result = First_Parameter + Second_Parameter;
    return result;
}
int main()
{
    int fn = 13;
    int sn = 2;
    cout << "First number is: " << fn << endl;  // Statement //13
    cout << "Second number is: " << sn << endl; // 2
    int sum = fn + sn;                          // 15
    cout << "Sum is :" << sum << endl;
    sum = AddNumber(12, 35);
    cout << "New sum is : " << sum << endl; // 47
    cout << "Sum is: " << AddNumber(20,50)<<endl; //70
    return 0;
}