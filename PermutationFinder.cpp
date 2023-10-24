/*
Given A smaller string is and a bigger string B resigned, and I'll go in them to find all permutations of this Shorter string within the longer one. Print the location of each communication.

*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool checkPermutations(const string& str1, const string& str2){
    if(str1.length()!= str2.length()){
        return false;
    }

    string sortedstr1 = str1;
    string sortedstr2 = str2;
     
    sort(sortedstr1.begin(),sortedstr1.end());
    sort(sortedstr2.begin(),sortedstr2.end());

    return sortedstr1 == sortedstr2;

}

void findpermutations(const string& smaller, const string& bigger){
    int slength = smaller.length();
    int blength = bigger.length();

    for(int i=0;i<=blength-slength;++i){
        string substr = bigger.substr(i,slength);
        if(checkPermutations(smaller,substr)){
            cout<<"permutation found at "<<i<<":"<<substr<<endl;

        }
    }

}

int main(){
    string A="ab";
    string B="cbacab";

    findpermutations(A,B);

    return 0;
}
