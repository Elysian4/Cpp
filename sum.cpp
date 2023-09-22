#include<iostream>
using namespace std;

int pairsum(int a,int b){
    return a+b;
}

int intpair(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pairsum(i,i+1);
    }
    return sum;
}

int main(){
    cout<<intpair(4);
}
