#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int N[1000];
    
    int n;
    cin>>n;
    
    for (int i=0;i<n;i++){
        cin>>N[i];
    }   
    
    for(int i=n-1;i>=0;i--){
        cout<<N[i]<<" ";
    }
    return 0;
}
