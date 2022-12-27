#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a{};
    long long int b{};
    char e{};
    float c{};
    double d{};
    cin>>a>>b>>e>>c>>d;
    cout<<a<<endl<<b<<endl<<e<<endl<<floor(c*1000)/1000<<endl<<floor(1000000000*d)/1000000000;
    return 0;
}
