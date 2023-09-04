#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}


int partition(int arr[],int l, int h){
    
    int pivot =arr[l];
    // int i=l;
    int count=0;
    

    for(int i=l+1;i<h;i++){
        if(arr[i]<=pivot){
            count++;
        }
        
    }
    int pivotindex= l+count;
    swap(arr[pivotindex],arr[l]);

    int i=l;
    int j=h;
    

    while(i<=j){

        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<=j){
            swap(arr[i++],arr[j--]);
            
        }
    }

    return pivotindex;
}

void quicksort(int arr[],int l,int h){
    if(l>=h){
        return;
    }

    int n=partition(arr,l,h);

    quicksort(arr,l,n);
    quicksort(arr,n+1,h);
    
}


int main() {
    
    int array[8] = {2,4,1,6,9,9,9,9};
    //int z = sizeof(array) / sizeof(int);
    int z=8;
    quicksort(array,0,z-1);

    for(int i=0;i<z;i++){
        cout<<array[i]<<" ";
    }cout<<endl;
    
}
