/* XOR-AND Inversions

Problem Statement

You are given an integer array A of size N. Your task is to count and print the number of XOR AND inversions in array A pair (1) is said to be an XOR-AND inversion 
if and only if it satisfies the following conditions:

(A[i]&A[j] >= A[i]^ A[j]) 

Note:

AND (&)- bitwise Operator
XOR (^)- bitwise Operator

Input Format:

The input consists of two lines:

The first line contains an integer N.

The second line contains N space-separated integers denoting the array elements. Input will be read from the STDIN by the candidate

Output Format:

Print the count of XOR-AND inversions

Output will be matched to the candidate's output print d on the STDOUT

Constraints:
A[i] ≤ 105

Example:

Input:

5

7 12 16 10 6

Output:

2

Explanation:

There are only two pairs that satisfies both the conditions those are

(1, 5) its respective element are (7, 6), (786) = 6, (76) 1, Here (786) >= (7^6). 
(2, 4) its respective elements are (12, 10), (12&10) = 8, (12^10) = 6, Here (12810) >= (12^10)
Hence the output is 2.


  */


#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((A[i] & A[j]) >= (A[i] ^ A[j])) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

