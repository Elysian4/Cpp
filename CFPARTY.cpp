/*

n people came to a party. Then those, who had no friends among people at the party, left. Then those, who had exactly 1 friend among those who stayed, left as well. Then those, who had exactly 2, 3, ..., n - 1 friends among those who stayed by the moment of their leaving, did the same.
What is the maximum amount of people that could stay at the party in the end?

Input
The first input line contains one number t — amount of tests (1 ≤ t ≤ 105). Each of the following t lines contains one integer number n (1 ≤ n ≤ 105).

Output
For each test output in a separate line one number — the maximum amount of people that could stay in the end.

*/

#include <iostream>
using namespace std;
 
int main() {
    
    // your code here
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        if(n<3){
            cout << 0 <<endl;
        } 
        else{
            cout << n-2 <<endl;
        }
    }
    
    return 0;
}
Advertisement

//here we have only taken one case..there can be dieffrent code for different scenarios.
