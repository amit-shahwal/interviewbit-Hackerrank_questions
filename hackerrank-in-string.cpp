#include <bits/stdc++.h>

using namespace std;
stack <char> st;
// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

string str = "hackerrank";
        if (s.length() < str.length()) {
            return "NO";
        }
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (j < str.length() && s[i] == str[j]) {
                    j++;
            }
        }
        return (j == str.length() ? "YES" : "NO");
}
