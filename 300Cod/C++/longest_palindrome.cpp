// Longest Palindromic Substring
#include<iostream>
#include<string>
using namespace std;
/*
string longestPalindrome(string s) {
    int start = 0, maxLen = 1;
    int n = s.size();

    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    };

    for (int i = 0; i < n; ++i) {
        expand(i, i);     // odd length
        expand(i, i + 1); // even length
    }

    return s.substr(start, maxLen);
}
*/

   string longestPalindrome(string s) {
        string p;
        int begin = 0,last = 0;
        int maxPali = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
           cout << "i:"<< i << " ";
           for(int j = i+1; j < n; j++ )
           jump:
            if(s[i] == s[j]){
                int new_size = (j+1)-i;
                cout << endl;
                cout << "size: "<< new_size << endl;
                int left=0,right=0;
                if(new_size % 2 == 0){
                    left = (i+j-1)/2;
                    right = (i+j+1)/2;
                    cout << "left:" << left << " right:"<< right << endl;
                    // }
                    while(left > i){
                        if(s[left] == s[right]){
                            cout << "this: ";
                            left--;
                            right++;
                        }else{
                            j+=1;
                            cout << "goto: " << endl;
                            goto jump;
                        }
                    }
                }else{
                    left = right = (i+j)/2;
                    while(left > i){
                        if(s[left] == s[right]){
                            cout << "this: ";
                            left--;
                            right++;
                        }else{
                            j+=1;
                            cout << "goto: " << endl;
                            goto jump;
                        }
                    }
                }
                if(new_size > maxPali){
                    maxPali = new_size;
                    cout << "maxPali" << maxPali;
                    begin = i;
                    last  = new_size;
                }  
            }
        }
        p = s.substr(begin,last);
        if(maxPali==0&&s.length()<=2){
        p = s[0];  
        }
        return p;
    }


// Main
int main(){
    string s,p;
    cout << "nhap chuoi s: ";
    cin >> s;
    p=longestPalindrome(s);
    cout << endl;
    cout << "String Pali: " << p ; 
    return 0;    
}
