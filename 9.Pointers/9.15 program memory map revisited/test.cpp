#include <iostream>
using namespace std;
int main(){
    int *a {new int {22}};
    cout<<*a;
    delete a;
    a = nullptr;
}