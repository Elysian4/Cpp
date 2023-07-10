/*You are given N domino tiles. Each tile is made of some number of squares (not necessarily two), and each square is coloured either white or black (we use the Croatian letters: B for white and C for black).

Find the longest chain that can be made of these tiles. Each tile can be used at most once and cannot be rotated (for example, BC cannot become CB). The chain is made by a common rule: in adjacent tiles, touching squares must be of the same colour.

Input
[N ≤ 100, the number of dominoes]

in the next N lines:

[a string of size between 1 and 100, representing the domino]

Output
The length of the longest chain.

*/




#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){	
	
	int n;
	string s;
	
	cin >> n;
	
	vector<int> BB, BC, CB, CC;
	long long int bbLen = 0;
	long long int ccLen = 0;
	
	for(int i=0;i<n;i++){
		cin >> s;
		int l = s.length();
		// We have to figure out this of which type
		if(s[0] == 'B' && s[l-1] == 'B'){
			BB.push_back(l); bbLen+= l;	
		}else if(s[0] == 'B' && s[l-1] == 'C'){
			BC.push_back(l);	
		}else if(s[0] == 'C' && s[l-1] == 'B'){
			CB.push_back(l);	
		}else{
			CC.push_back(l); ccLen+= l;		
		}
	}
		
	sort(BC.begin(),BC.end());
	reverse(BC.begin(),BC.end());
	
	sort(CB.begin(),CB.end());
	reverse(CB.begin(),CB.end());
		
	if(BC.size() ==0 && CB.size()==0){
		cout<<max(bbLen,ccLen);
	}else{
		int minimum = min(BC.size(),CB.size());
		int ans = 0;
		
		for(int i=0;i<minimum;i++){
			ans+= BC[i] + CB[i];
		}
		
		if(BC.size() > CB.size() ){
			ans+=BC[minimum];
		}
		
		if(BC.size() < CB.size() ){
			ans+=CB[minimum];
		}
		
		ans += (bbLen + ccLen);
		cout<<ans;
	}	
		
	return 0;
}
