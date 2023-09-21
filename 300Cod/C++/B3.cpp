#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int n = s.length();
    int start = 0, end = 0, maxLength = 0;
    
    while (end < n) {
        if (seen.find(s[end]) == seen.end()) {
            seen.insert(s[end]);
            end++;
            maxLength = max(maxLength, end - start);
        } else {
            seen.erase(s[start]);
            start++;
        }
    }
    
    return maxLength;
}
int main(){
    string s;
    int maxLength;
    cin >> s;
    maxLength = lengthOfLongestSubstring(s);
    cout << "lengthOfLongestSubstring s: " << maxLength << endl;
    return 0; 
}