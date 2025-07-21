#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter your marks : ";
    cin >> a;
    if(a>=90){
        cout<<"Your Grade is A\n";
    }else if(a>=80 && a<90){
        cout<<"Your Grade is B\n";
    }else{
        cout<<"Your Grade is c\n";
    }
}