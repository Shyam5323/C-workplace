#include <iostream>
int static_var2{30}; //dies wehn program ends
void fun(){
    int local_var3{30};// dies at end of block
    static int static_var1{40}; // Dies when program ends
    int dynamic_var1{50}; //You decide when it dies
    
}