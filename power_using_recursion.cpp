#include<iostream>
#include<cmath>
using namespace std;


int power(int a,int b){
    if(b<0){
        return 0;
    }

    else if(b==0){
        return 1;
    }

    else{
        return a* power(a,b-1);
    }
}

int main(){
    int a,b;
    cout<<"enter numbers a and b"<<endl;

    cin>>a>>b;
    cout<<power(a,b);

    
}

