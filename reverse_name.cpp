#include<iostream>
using namespace std;
int main(){
    string  name1;
    string  name2;
    string temp;
    cout<<"Enter the name1 : ";
    cin>>name1;
    cout<<"Enter the name2 : ";
    cin>>name2;
    temp=name1;
    name1=name2;
    name2=temp;
    cout<<"The first name after swapping: "<<name1<<endl;
    cout<<"The second name after swapping: "<<name2<<endl;

    return 0;
}