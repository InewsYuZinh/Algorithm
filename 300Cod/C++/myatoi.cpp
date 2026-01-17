// String to Integer (atoi)
#include <cctype>
#include <climits>
#include<iostream>
#include<string>
using namespace std;
    int myAtoi(string s) {
       int i = 0, sign = 1, n = s.size();
       long long result = 0;
        while (i < n && s[i] == ' ') 
            i++;
        if(i < n && (s[i]== '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while(i < n && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');
        
            if(sign == 1 && result > INT_MAX)
                return INT_MAX;
            if(sign == -1 && result < INT_MIN)
                return INT_MIN;
            i++;
        }
     return sign * result;
    }
    int main(){
        string s;
        int i;
        cout << "String: ";
        //cin >> s;
        getline(cin,s);
        i = myAtoi(s);
        cout << "MyAtoi: " << i;
        return 0;
    }
