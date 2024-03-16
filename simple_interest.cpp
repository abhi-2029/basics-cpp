#include<iostream>
using namespace std;
int main(){
    int principle;
    int rate;
    float time;
    float percentage;
    cout<<"Enter the value of principle: ";
    cin>>principle;
    cout<<"Enter the value of rate: ";
    cin>>rate;
    cout<<"Enter the time period: ";
    cin>>time;
    percentage=(principle*rate*time)/100;
    cout<<"Actual price: "<<percentage<<endl;

    return 0;
}