#include <iostream>
using namespace std;
int main(){
int increment{5};
int num1{10};
int num2{20};
int num3{30};
int result = (num1 *= ++increment /*increment = 6*/ , num2 - (++increment)/*increment = 7 and num2 is still 20 as it wasnt assigned to num2*/, num3 += ++increment/*incrememnt is now 8*/);
cout<<"num1 : "<<num1<<endl;
cout<<"num,2 : "<<num2<<endl;
cout<< " num3 : "<<num3<<endl;
cout<<"result : "<<result<<endl;
}