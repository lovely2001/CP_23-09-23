//Check if a given year is leap year or not

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year you want to check is Leap year or not : "<<endl;
    cin>>year;

    if((year % 400 == 0) || ((year%100 != 0) && (year%4==0))){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
     
}