/*TWOSQRS - Two squares or not two squares
#number-theory
Given integer n decide if it is possible to represent it as a sum of two squares of integers.

Input
First line of input contains one integer c <= 100 - number of test cases. Then c lines follow, each of them consisting of exactly one integer 0 <= n <= 10^12.

Output
For each test case output Yes if it is possible to represent given number as a sum of two squares and No if it is not possible.

Example
Input:
10
1
2
7
14
49
9
17
76
2888
27

Output:
Yes
Yes
No
No
Yes
Yes
Yes
No
Yes
No
*/



#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

bool is_perfect_sq( long long int n ){
        long long int sq = sqrtl(n);
        return         (sq * sq == n? true : false);
}

int main(){

        int t;
        cin>> t;
        
        while(t--){
                
                long long int n;
                cin>>n;
                
                long long int sq_root_n = sqrtl(n);
                bool solution_found = false;
                for(long long int a = 0; a<= sq_root_n; a++){
                        bool success = is_perfect_sq(n-a*a);
                        
                        if(success){
                                solution_found = true;
                                break;
                        }
                }
                cout << (solution_found?"Yes":"No" ) <<endl;
                
        }
        
        return 0;
}
