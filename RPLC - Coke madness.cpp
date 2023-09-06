/*David likes coke, lets say he likes it a lot... One day he was walking by a narrow street when he sees a lot of bottles of cokes, from different brands, he wants to drink it all, but he noticed that one brand gives him power, the other brand weaken him, now, he can wait and regain more energy, but he don't want to do that, he will wait at the beginning and, when he has the sufficient energy he will drink all the cokes in the street.

Please, help him find when he will be in the perfect moment to drink all the cokes.

Input
Will start with an integer T denoting the number of test cases, then, T lines will follow, for each test case, there will be an integer N, then, in the next line will be N integers, this will be the number of cokes, and the values of the cokes in the floor (the positive one gives energy, the negative ones will take his energy).

Output
Each test case will output the string “Scenario #i: “ where i is the number of test case analyzed, followed by the minimum energy required by David to pass the street.

Example
Input:
2
5
4 -10 4 4 4
5
1 2 3 4 5

Output:
Scenario #1: 7
Scenario #2: 1
“The life of David should never reach 0 or less”

Constraints
1 <= N <= 1000000
-10000000 <= Ni <= 10000000
*/



#include <iostream>
using namespace std;

int main() {
	
	// your code here
	
	int t;
	
	cin >> t;
	int counter = 1;
	
	while(t--){
		
		int n;
		cin>> n;
		
		long long int intial_energy = 1;
		long long int energy = 1;
		
		long long int temp;
		
		for(int i=0;i<n;i++){
			cin>>temp;
			
			energy = energy + temp;
			                  //-5
			if( energy <= 0 ){
				intial_energy = intial_energy + ( -energy + 1 );
				energy = 1;
			}
			
		}
		
		cout<<"Scenario #" << counter <<": "<< intial_energy <<endl;
		counter++;
	}

	return 0;
}
