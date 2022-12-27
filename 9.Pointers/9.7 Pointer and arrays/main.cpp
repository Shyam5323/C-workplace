#include <iostream>
using namespace std;
int main(){
    int scores[10]{11,12,13,14,15,16,17,18,19};
    int *p_score{scores};
    cout<<"scores : "<<scores<<endl;
    cout<<"p_score : "<<p_score<<endl;
    cout<<"&scores[0]: "<<&scores[0]<<endl;

    //print content of address
    cout<<"print out data at array address"<<endl;
    cout<<"scores: "<<*scores<<endl;
    cout<<scores[0]<<endl;
    cout<<*p_score<<endl;
    cout<<p_score[0]<<endl; 

    //differences between array name and pointer
    int number{21};
    p_score= &number;
    //scores= &number; //the array name is a special pointer that kind of identifies
    //the entire array. you get eror : incompatible types in
    //assignment of 'int*' to 'int[10]'
    //scores=&number; error

    //size doesnt work with raw pointers
    cout<<"size :"<<size(scores)<<endl;
    //cout<<"sinze : "<<size(p_score)<<endl; error
}