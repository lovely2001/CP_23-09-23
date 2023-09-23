//Program to check if a number is Positive, Negative, Odd, Even, Zero

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    if(num == 0){
        cout<<"Entered number is zero "<<endl;
    }

    string ans ;
    ans = (num>=0)?"Positive" : "Negative";
    cout<<ans<<endl;

    ans = (num%2==0)?"even" : "odd";
    cout<<ans<<endl;


}