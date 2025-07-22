#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }else{
        int sum=0;
        while(n!=0){
            int a;
            a=n%10;
            sum=sum+a;
            n=n/10;
            if(n==0){
                return sum;
            }
        }
    }
}


int main(){
    int a;
    cout<<"Enter the number to get the sum of the digits : ";
    cin>>a;
    // cout<<a/10;
    cout<<"Sum of the digits of "<<a<<" : "<<sumOfDigits(a);

}