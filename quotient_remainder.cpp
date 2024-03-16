#include<iostream>
using namespace std;
int main(){
    int dividend;
    int divisor;
    int quotient;
    int remainder;
    cout<<"Enter the value of dividend: ";
    cin>>dividend;
    cout<<"Enter the value of divisor: ";
    cin>>divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout<<"The quotient of the division is:  "<<quotient<<endl;
    cout<<"The remainder of the division is: "<<remainder<<endl;

    return 0;
}