#include<iostream>
#include<algorithm>
using namespace std;


void printarr(int arr[],int z){
    for(int i=0;i<z;i++){
        cout<<arr[i]<<" ";
        
    }
}

void reverse(int arr[],int z){
    for(int i=0;i<z/2;i++){

        /*another method:

        int other =z-i-1;
        int temp= arr[i];

        arr[i]=arr[other];
        arr[other]=temp;
        */

        swap(arr[i],arr[z-i-1]);

        
    }

    
}

int main(){
    int array[]={1,3,4,9,1,8,7};

    int z=sizeof(array)/sizeof(int);

    reverse(array,z);
    printarr(array,z);

    

    return 0;
}
