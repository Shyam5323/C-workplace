#include <iostream>
using namespace std;
int main(){
    //increment/ decxrement pointer adress manually
    int scores[10]{11,12,13,14,15,16,17,18,19,20};
    int* p_score{scores};
    cout<<endl;
    //this increases the adress by 4 bytes and shifts the value of pointer one forward in array.
    /*cout<<"Values in scores array (p_score pointer increment)"<<endl;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;
    ++p_score;
    cout<<"adress: "<<p_score<<"value: "<<*(p_score)<<endl;*/
    cout<<"Pointer arithmatics using loops"<<endl;
    for (size_t i{0}; i<size(scores) ; i++){
        cout<<"Adress : "<<p_score<<" Value : "<<*p_score<<endl;
        p_score++;
        cout<<endl;
    }
    p_score=scores;
    cout<<endl;

    //Can do without modifying pointer
    cout<<"Pointer arithmatics using loops without modifying "<<endl;
    for (size_t i{0}; i<size(scores) ; i++){
        cout<<"Adress : "<<(scores+i)<<" Value : "<<*(scores+i)<<endl;
    }
    cout<<endl;

    //Print array in reverse order
    cout<<"Pointer arithmatics using loops to show in reverse"<<endl;
    for (size_t i{size(scores)}; i>0 ; i--){
        cout<<"Adress : "<<(scores+i-1)<<" Value : "<<*(scores+i-1)<<endl;
    }
    cout<<endl;

    //Can do same thing with index array
    cout<<"reverse with araray indexing"<<endl;
    for (size_t i{size(scores)}; i>0 ; i--){
        cout<<scores[i-1]<<endl;
        cout<<endl;
    }
    cout<<endl;

    //Can modify array
    cout<<"Modifying array with navigation"<<endl;
    cout<<endl;
    scores[0]=31;
    *(p_score+2)=33;
    cout<<scores[2]<<endl;


    return 0;

}