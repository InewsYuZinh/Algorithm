// ZigZac Convert
#include<iostream>
#include<string>
using namespace std;
string convert(string s, int numRows){
	if(numRows==1){
	return s;
	}	
	int step;
	string result = "";
    int n = s.size();
	for(int i = 0; i< numRows; i++){
        step = 2*numRows-2;
		for(int j = i; j < n; j += step){
			result += s[j];
			if(i != 0 && i != (numRows-1)){
				j += 2*numRows - 2 - 2*i;
				if(j < n){
				result += s[j];
				step = 2*i;
				}		
			}
		}
	} 
/*
	for(int i = 0; i < numRows; i++){
		for(int j = i; j < s.size(); j += step){
			result += s[j];
			
			int k = j + step - 2 * i;
			if(i!=0 && i!=(numRows-1) && k<s.size()){
				result += s[k];
			}
		}
	}
*/	
	return result;
}

int main(){
	string s,cv;
	int row;
    int n = cv.size();
	cout << "Row: ";
	cin >> row;
	cout << "String ZigZac: ";
	cin >> s;
	cv = convert(s, row);
	cout << "String Convert: ";
	for(int i = 0; i < n; i++){
		cout << cv[i]; 	
	}
    return 0;


}
