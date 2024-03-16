#include<iostream>
using namespace std;
int main(){
    int radius;
    float pi=3.14;
    int height;
    float volume;
    cout<<"Enter the value of radius: ";
    cin>>radius; 
    cout<<"Enter the value of height: ";
    cin>>height;
    volume=(1.0/3.0)*pi*(radius*radius)*height;
    cout<<"The volume of cone: "<<volume<<endl;
    return 0;
}