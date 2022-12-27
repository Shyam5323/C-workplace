#include <iostream>
using namespace std;
int main(){
    auto var1 {5};
    auto var2 {12.0};
    auto var3 {13.0f};
    auto var4 {15.0l};
    auto var5 {'e'};
    //int modifier suffixes
    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {128ll};

    cout<<"var1 occupies "<<sizeof(var1)<<endl;
    cout<<"var2 occupies "<<sizeof(var2)<<endl;
    cout<<"var3 occupies "<<sizeof(var3)<<endl;
    cout<<"var4 occupies "<<sizeof(var4)<<endl;
    cout<<"var5 occupies "<<sizeof(var5)<<endl;
    cout<<"var6 occupies "<<sizeof(var6)<<endl;
    cout<<"var7 occupies "<<sizeof(var7)<<endl;
    cout<<"var8 occupies "<<sizeof(var8)<<endl;
    

    return 0;

}