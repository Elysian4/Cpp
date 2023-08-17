/* bubble sort using resurion*/

#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int bubblesort(int arr[],int n,int k){

    int temp;
    int flag=0;
    for(int i=0;i<n-k;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            flag=1;
        }

    }
    if (flag==1){
        bubblesort(arr,n,k+1);
    }
      
    

}



int main(){
    int array[]={9,3,5,2,7,6,8,1,4};
    int z=sizeof(array)/sizeof(int);
    int k=1;
    bubblesort(array,z,k);
    printarray(array,z);
}
