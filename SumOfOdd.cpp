#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0,n;
    cout <<"Enter the value of n : ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i+=2;
    }
    cout<<"Sum of all odd number from " <<1<<" to "<<n<<" : " <<sum;
}