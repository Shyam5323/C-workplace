#include <iostream>
using namespace std;
int main()
{
    //Same as other like int double etc
    //except you can initialize char pointer with string literal
    const char* message{"hello world!"};
    cout<<"Message: "<<message<<endl;
    //*message='B';  -- Compiler error
    cout<<"*message : "<<*message<<endl;

    //Allow user to modify string
    char message1[]{"Hello world"};
    message1[0]='N';
    cout<<message1<<endl;

    return 0;
}