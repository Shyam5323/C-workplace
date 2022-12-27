 #include <iostream>
 using namespace std;
int main(){
    int max{};
    int a{35};
    int b{20};
    cout<<endl;
    max = (b>a)? b:a;
    auto min= (b>a)? b:22.1f;
    cout<<"MAx is "<<max<<endl; 
    cout<<"Min is "<<min<<endl;;
}