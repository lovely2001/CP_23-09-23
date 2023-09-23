// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;


int climbStairs(int n) {
    int one=1 , two=1;
    for (int i=1;i<=n-1;i++){
        int temp=one;
        one = one + two;
        two=temp;
    }
    return one;
}

int main(){
    int n;
    cin>>n;
    cout<<"Number of ways you can reach the top is : "<<climbStairs(n)<<endl;;
}