#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int lst[4]{a,b,c,d};
    int min {};
    for(int i{}; i<4;i++ ){
        if ( lst[i]>min){
            min=lst[i];
        }
    }
    cout<<min;
      
    return 0;
}
