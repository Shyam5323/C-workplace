// constexpr -- compute things in compile time instead of run time to save time during running each tinme
#include <iostream>
using namespace std;
int main(){
    constexpr int ran{123};
    constexpr int dan{2};
    constexpr double fan{3.14};
    cout<<ran<<endl<<dan<<endl<<fan;
    const int a{1};
    //constexpr int b{a};  ---- error because cant use const value to initialise constexpr value as it runs in compile time
    constexpr int ban{dan};
    cout<<endl<<ban;
    static_assert(ran == 123); // Compile time check
    return 0;
}