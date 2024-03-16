#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4;
    int avg;
    cout<<"Enter the value of num1: ";
    cin>>num1;
    cout<<"Enter the value of num2: ";
    cin>>num2;
    cout<<"Enter the value of num3: ";
    cin>>num3;
    cout<<"Enter the value of num4: ";
    cin>>num4;
    avg=(num1+num2+num3+num4)/4;
    cout<<"Total average is : "<<avg<<endl;
    return 0;
}