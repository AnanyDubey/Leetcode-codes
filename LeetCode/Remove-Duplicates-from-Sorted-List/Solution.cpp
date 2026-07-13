1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        if(head == NULL || head->next == NULL) return head;
15        ListNode* prev = head;
16        ListNode* temp = head->next;
17
18
19        while (temp!= NULL){
20            if(prev->val == temp->val){
21                prev->next = temp->next;
22                temp = temp->next;
23            }
24            else{
25                prev = prev -> next;
26                temp = temp -> next;
27            }
28        
29        }
30        prev -> next = NULL;
31        return head;
32    
33    }
34
35};