#include <iostream>
using namespace std;
 int main(){
    //Braced Initialisation 
    //Variable can contain any garbage value
    int elephant_count;
    int lion_count{}; //initializes to zero
    int dog_count{10}; //Initializes to 10
    int cat_count = 15; //Initializes to 15 - assignment
    //Can use expression as initialiser
    int domesticated{dog_count+cat_count};
    //int new_number{doesnt_exist};4
    //int narrowing_conversion {2.9}  -- Error(not int)
    cout<<"Elephant: "<<elephant_count<<endl;
    cout<<"lion: "<<lion_count<<endl;
    cout<<"dog: "<<dog_count<<endl;
    cout<<"Cat: "<<cat_count<<endl; 

    //Functional initialisation
    int apple(5);
    int narrowing_conversion(2.5); //data lost-not safe
    cout<<"Apple: "<<apple<<endl<<"lost: "<<narrowing_conversion;

    //Size
    cout<<"Size of int: "<<sizeof(int)<<endl;
    cout<<"Size: "<<sizeof(apple);
    return 0;

 }