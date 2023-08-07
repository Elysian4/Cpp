/* binary search using recursive function

time complexity :  the time complexity of the recursive binary search algorithm is still O(log n), 
                   regardless of whether the implementation is iterative or recursive. 
                   Both versions have the same overall time complexity
*/

#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int h,int a){

    
    if(l<=h){
    

        int middle=(l+h)/2;
        
        if(arr[middle]==a){
            return middle;
        }

        else if(arr[middle]<a){
            return binarysearch(arr,middle+1,h,a);
        }

        else{
            return binarysearch(arr,l,middle-1,a);
        }

    }
    return -1;

}

int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int z=sizeof(array)/sizeof(int);
    int a;
    cin>>a;
    int lower=0;
    int upper=z-1;
    int n=binarysearch(array,lower,upper,a);
    cout<<n;
}
