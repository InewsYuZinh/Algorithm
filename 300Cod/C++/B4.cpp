// Library
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// Swap
/* 
    void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
} */
// Main
int main(){
    vector<int> nums1;
    vector<int> nums2;
    vector<int> merged;
       int num1,num2;
       cout << "Array1: ";
       do
       {
        cin >> num1;
         if(num1==-1)
         break;
        nums1.push_back(num1);
       } while (num1 > -1);
       cout << "Array2: ";
       do
       {
        cin >> num2;
         if(num2==-1)
         break;
        nums2.push_back(num2);
       } while (num2 > -1);
        double average; 
        int n = nums1.size(), m = nums2.size();   
    
           for (int i = 0; i < n; i++) {
            merged.push_back(nums1[i]);
           }
           for (int i = 0; i < m; i++) {
            merged.push_back(nums2[i]);
           }
// auto sort
          sort(merged.begin(), merged.end());
// sort
/*    
            for(auto i = merged.begin(); i < merged.end(); i++){
                for(auto j = i + 1; j < merged.end(); j++){
                    if(*i < *j)
                    Swap(*i, *j);
                }
          } 
*/

          int total = merged.size();
        //   cout << "Merged size: ";
        //   cout << total;
        //   cout << endl;

// Editorial
/*         
         if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size(), n = nums2.size();
        int left = 0, right = m;
        
        while (left <= right) {
            int partitionA = (left + right) / 2;
            int partitionB = (m + n + 1) / 2 - partitionA;
            
            int maxLeftA = (partitionA == 0) ? INT_MIN : nums1[partitionA - 1];
            int minRightA = (partitionA == m) ? INT_MAX : nums1[partitionA];
            int maxLeftB = (partitionB == 0) ? INT_MIN : nums2[partitionB - 1];
            int minRightB = (partitionB == n) ? INT_MAX : nums2[partitionB];
            
            if (maxLeftA <= minRightB && maxLeftB <= minRightA) {
                if ((m + n) % 2 == 0) {
                    return (max(maxLeftA, maxLeftB) + min(minRightA, minRightB)) / 2.0;
                } else {
                    return max(maxLeftA, maxLeftB);
                }
            } else if (maxLeftA > minRightB) {
                right = partitionA - 1;
            } else {
                left = partitionA + 1;
            }
        } 
*/

        if(total % 2 == 1){
            average = merged[total / 2];
        }else{
            average = (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
        }
        cout << "Average of two array: "<<average << endl;

    return 0;
}
 