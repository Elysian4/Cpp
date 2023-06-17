#include<iostream>
using namespace std;

int linearsearch(int arr[],int z,int a){

    int c=0,n;

    for(int i=0;i<z;i++){
        if(arr[i]==a){
            return i;
        }
        return -1;
    }
    
}

int main(){
    int arra[]={4,5,7,8,5,3,1};
    int z=sizeof(arra)/sizeof(int);
    cout<<linearsearch(arra,z,11);
    
    return 0;
    
}
