#include<iostream>
using namespace std;

bool checkprime(int n){
    bool ans = true;
    for(int i=2;i<n;i++){
        if((n%i)==0){
            ans = false;
            break;
        }
    }
    return ((ans==true)? true : false);
}

int main(){
    int number;
    cout<<"Enter the number you want to check is prime or not : "<<endl;
    cin>>number;
    cout<<checkprime(number);

}