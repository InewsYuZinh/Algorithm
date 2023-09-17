// add two numbers
#include<iostream>
#include<vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0) , next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*Note*/
// First case: If struct is created empty, without given "val" and "*next", it will be val(0), next(nullptr) (nullptr, because *next is pointer, we know it because of * sign)
// Second case: If "val" is given, which is "x", it would take its value, but "*next" still would be "nullptr"
// Third case: All values are given, our struct "ListNode" will take all this values.
// <-sub->::
// Trường hợp đầu tiên: Nếu struct được tạo trống, không có "val" và "*next", nó sẽ là val(0), next(nullptr) 
// (nullptr, vì *next là con trỏ nên chúng ta biết điều đó nhờ dấu *)
// Trường hợp thứ hai: Nếu cho trước "val", tức là "x", nó sẽ lấy giá trị của nó, nhưng "*next" vẫn sẽ là "nullptr"
// Trường hợp thứ ba: Tất cả các giá trị đã được đưa ra, struct "ListNode" của chúng ta sẽ lấy tất cả các giá trị này.

// class Solution {
// public:
     ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
     int countL1 = 0;
        ListNode* curL1 = L1;
        while (curL1 != NULL){
            countL1++;
            curL1 = curL1->next;
        }
        int countL2 = 0;
        ListNode* curL2 = L2;
        while (curL2 != NULL)
        {
            countL2++;
            curL2 = curL2->next;
        }
        int sum = 0;
        int resi  = 0;
        ListNode* sumHead = new ListNode(0);
        ListNode* cur = sumHead;
        if(countL1 > countL2){
            for(int i = 0; i <= countL1; i++){
                if(resi == 0 && i == countL1)
                 break;
                int x = L1 ? L1->val : 0;
                int y = L2 ? L2->val : 0;
                sum = resi + x + y;
                resi = sum / 10;
                cur->next = new ListNode(sum % 10);
                cur = cur->next;
                L1 = L1 ? L1->next : nullptr;
                L2 = L2 ? L2->next : nullptr;

            }
            return sumHead->next;     
        }else if(countL1 < countL2){
           for(int i = 0; i <= countL2; i++){
                if(resi == 0 && i == countL2)
                 break;
                int x = L1 ? L1->val : 0;
                int y = L2 ? L2->val : 0;
                sum = resi + x + y;
                resi = sum / 10;
                cur->next = new ListNode(sum % 10);
                cur = cur->next;
                L1 = L1 ? L1->next : nullptr;
                L2 = L2 ? L2->next : nullptr;
            }
            return sumHead->next;  
        }else{
             for(int i = 0; i <= countL1; i++){
                if(resi == 0 && i == countL2)
                 break;
                int x = L1 ? L1->val : 0;
                int y = L2 ? L2->val : 0;
                sum = resi + x + y;
                resi = sum / 10;
                cur->next = new ListNode(sum % 10);
                cur = cur->next;
                L1 = L1 ? L1->next : nullptr;
                L2 = L2 ? L2->next : nullptr;
            }
            return sumHead->next;  
        }
    }
// };

void push(ListNode** head, int new_data)
{
     ListNode* new_node = new ListNode();
     new_node->val  = new_data;
     new_node->next = (*head);
     (*head) = new_node;
}


int main()
{
    ListNode* sum = new ListNode(0);
    
/*# Add element in main with new listnode*/
/*List1*/
    // ListNode* n3 = new ListNode(3);
    // ListNode* n2 = new ListNode(4, n3);
    // ListNode* n1 = new ListNode(2, n2);
/*List2*/
    // ListNode* m3 = new ListNode(4);
    // ListNode* m2 = new ListNode(6, m3);
    // ListNode* m1 = new ListNode(7, m2);
    
/*# Add element in main with push*/  
/*List2*/
    //   push(&n1, 6);
    //   push(&n1, 7);
    //   push(&n1, 5);
/*List1*/
    //   push(&m1, 6);
    //   push(&m1, 7);
    //   push(&m1, 5);
  
/*# Add element in keyboard with push*/
    // vector<int> nums1, nums2;
    int num1,num2;
    ListNode* n1 = NULL;
    ListNode* m1 = NULL;
    do
    {
        cin >> num1;
        if(num1==-1)
         break;
        push(&n1, num1);
    } while (num1 > -1);    
    do
    {
        cin >> num2;
        if(num2==-1)
         break;
        push(&m1, num2);
    } while (num2 > -1);
      

    // test  
    // while(n1!=NULL){
    //     cout << n1->val << " ";
    //     n1 = n1->next;
    // }
  

/*Call and Print*/
    sum = addTwoNumbers(n1, m1);
    while(sum != NULL){
        int s = sum->val;
        //  int x = sum ? sum->val : 0;
        cout << s << " ";
        //  sum = sum ? sum->next : nullptr;
        sum = sum->next;
    }
    return 0;
}
