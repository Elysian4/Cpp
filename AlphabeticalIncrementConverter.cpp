/*
Given a sentence Str, every character in the sentence must be replaced with the next character from alphabetical series and the resulting string 'res' should be printed. Any characters in Str that are not alphabets should be retained as they are. Read the input from STDIN and print the output to STDOUT. Do not write arbitrary strings while reading the input or while printing, as these contribute to the standard output.

Constraints:

1) If the character is "Z" then it should be replaced with the next character "A" in the result. ii) If the character is "z" then it should be replaced with the next character "a" in the result. iii) Numbers and special symbols should be retained as it is.

Input Format:

A single line of input contains a sentence Str.

Output Format:

A single line of output contains the resultant string res.

Sample Input1:

Bangalore has very good weather

Sample Output1:

Cbohbmpsf ibt wfsz hppe xfbuifs

Explanation1:

Given Str as "Bangalore has very good weather" and incrementing each character would result in "Cbohbmpsf ibt wfsz hppe xfbuifs" which is printed as an output

Sample Input2:

Today is Wednesday 12-04-23

Sample Output2: Upebz jt Xfeoftebz 12-04-23

Explanation1:

Given Str as "Today is Wednesday 12-04-23", Incrementing each letter would result in "Upebz jt Xfeoftebz". which is printed as an output.

Numbers and symbols are retained as it is.

  */


#include <iostream>
#include <string>

using namespace std;

string update_string(string str) {
    string res = "";

    for (int i = 0; i < str.length(); i++) {
        char current_char = str[i];

        // Check if the character is an uppercase letter
        if (isupper(current_char)) {
            // Increment uppercase letters, considering 'Z' should become 'A'
            current_char = (current_char == 'Z') ? 'A' : current_char + 1;
        }
        // Check if the character is a lowercase letter
        else if (islower(current_char)) {
            // Increment lowercase letters, considering 'z' should become 'a'
            current_char = (current_char == 'z') ? 'a' : current_char + 1;
        }

        // Add the updated character to the result string
        res += current_char;
    }

    return res;
}

int main() {
    string str;
    getline(cin, str); // Read the input sentence from STDIN
    string result = update_string(str); // Call the function to update the string
    cout << result << endl; // Print the result to STDOUT
    return 0;
}
