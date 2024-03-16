#include<iostream>
using namespace std;
int main(){
    int a,b;
    int temp;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    temp=b;
    b=a;
    a=temp;
    cout<<"After swapping the 1st number: "<<a<<endl;
    cout<<"After swapping the 2nd number: "<<b<<endl;
    return 0;
}