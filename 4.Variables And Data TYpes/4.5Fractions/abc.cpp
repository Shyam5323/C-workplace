#include<iostream>

int main()
{
    int b,c,sum;
    std::cout<<"Enter number of set: ";
    std::cin>>b;
    std::cout<<"Enter a number"<<std::endl;
    for (int a=1;a<=b;++a)
    {
        std::cin>>c;
        sum=sum+c;
    }
5

    std::cout<<sum;

}