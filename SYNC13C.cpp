/*
Ramesh and Suresh get a box full of five stars on lottery each. Since both the boxes need not have the same number of chocolates, they decide to play a game. The winner gets to have both the boxes of chocolates. They play alternatively and Suresh starts the game.

Given the number of chocolates in both the boxes, let them be c1 and c2, the player takes either c1 or c2 number of chocolates and divide the remaining box of chocolates to two boxes (these two boxes need not have the same number of chocolates). The player who cannot make such a move loses.

Given the initial number of chocolates (c1 and c2) find the winner.Assume both the players play optimally.

Input
First line of input contains a number T (1 <= T <= 1000), the number of test cases. Then follows T lines each containing two space separated integers c1 and c2

(1 <= c1 <= c2 <= 10000).

Output
For each test case print "Ramesh" or "Suresh" depending on who is the winner.

*/

#include <iostream>
using namespace std;

int main() {
	
	// your code here
	
	int t;
	cin>>t;
	
	while(t--){
		
		int a,b;
		
		cin>>a>>b;
		
		if(a%2==1&&b%2==1){
			cout<<"Ramesh"<<endl;
		}else{
			cout<<"Suresh"<<endl;
		}
	}

	return 0;
}
