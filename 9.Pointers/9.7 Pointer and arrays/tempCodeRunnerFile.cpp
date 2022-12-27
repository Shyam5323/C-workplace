#include <iostream>
using namespace std;
int main(){
    int scores[10]{11,12,13,14,15,16,17,18,19};
    int *p_score{scores};
    cout<<"scores : "<<scores<<endl;
    cout<<"p_score : "<<p_score<<endl;
}