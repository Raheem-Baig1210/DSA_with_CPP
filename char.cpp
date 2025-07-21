#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<ch<<" is lowercase";
    }else{
        cout<<ch<<" is uppercase";
    }
}