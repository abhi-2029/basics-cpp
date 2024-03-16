#include<iostream>
using namespace std;
int main(){
    float ang1,ang2,ang3;
    cout<<"Enter the value of ang1: ";
    cin>>ang1;
    cout<<"Enter the value of ang2: ";
    cin>>ang2;
    ang3=180-(ang1+ang2);
    cout<<"The third angle is: "<<ang3<<endl;

    return 0;
}