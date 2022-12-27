#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
    std::vector<double> unit_price {10.4,21.5,14.0,15.2,7.9};
    std::vector<double> number_of_items{60,20,10,30,20,50};
    //At this moment, you don't need to worry about the code Above, just think of it as a way to set up 
    // our two collections in C++
 
    //Please try to change the indexes within the [ ] in code below and see which data prints out 
    std::cout << "price : " <<  unit_price[0] << std::endl;
    std::cout << "how many items : " << number_of_items[0] << std::endl;
    //cout<<unit_price[0]*number_of_items[0];
    double least_cost{unit_price[0]*number_of_items[0]};
    /*for (int i{}; i<size(unit_price) ; i++){
        cout<<unit_price[i]*number_of_items[i]<<endl;
    }*/
    cout<<size(unit_price)<<endl;
    for (double i{0}; i<=4 ; i++){
        if ((unit_price[i]*number_of_items[i])<least_cost){
            least_cost=unit_price[i]*number_of_items[i];
        }
    }
    cout<<least_cost;

 
    return 0;
}