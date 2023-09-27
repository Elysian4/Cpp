#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cout<<"enter numbers a and b"<<endl;

    cin>>a>>b;

    if(b<0){
        cout<<0;
    }

    else if(b==0){
        cout<<1;
    }

    else{
        cout<<pow(a,b);
    }
}
