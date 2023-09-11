/*Problem statement 

An arithmetic progression is a sequence of numbers such that the difference of any two successive members of sequence is constantAn arithmetic progression should have at least 3 numbers

given a sorted integer array arr and its length I as inputYou are required to find the length of the longest arithmetic progression in the sorted array arr and print the same.

Note:

Arithmetic progression need not be contiguous in the array

Print 0, if array arr doesn't contain the arithmetic progression

Print -1, if array arr is empty.

Input Format:

Each test case consists of two lines of input,

The first line contains an integer, i.e. I

The second line contains numbers of integers separated by space, l.eelements of arr.

Input will be read from the STDIN by the candidate

Output Format:

Print the length of the longest arithmetic progression in the sorted array arr.

The output will be matched to the candidate's output printed on the STDOUT

Constraints: .0<< 104

⚫ 0 < value of each element of arr < 109

Example:

Input:

6 1 7 10 15 27 29

Output:

3

Explanation:

The longest arithmetic progression in arr is {1, 15, 29} the length of which is 3, hence the output is 3.

Sample input

6
*/

#include <iostream>
#include <vector>
using namespace std;

int longestArithmeticProgression(int arr[], int n) {
    if (n < 3) {
        return 0; // Not enough elements for an AP
    }

    int longestAP = 2; // Minimum length of an AP is 2
    vector<vector<int>> dp(n, vector<int>(n, 2));

    for (int j = n - 2; j >= 1; j--) {
        int i = j - 1;
        int k = j + 1; // Declare k here

        while (i >= 0 && k < n) {
            if (arr[i] + arr[k] == 2 * arr[j]) {
                dp[i][j] = dp[j][k] + 1;
                longestAP = max(longestAP, dp[i][j]);
                i--;
                k++;
            } else if (arr[i] + arr[k] < 2 * arr[j]) {
                k++;
            } else {
                i--;
            }
        }
    }

    return longestAP;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "-1" << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = longestArithmeticProgression(arr, n);
    cout << result << endl;

    return 0;
}
