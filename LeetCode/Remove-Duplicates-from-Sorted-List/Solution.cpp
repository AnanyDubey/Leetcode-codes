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
15
16
17        ListNode* prev = head;
18        ListNode* temp = head->next;
19
20        while(temp != NULL){
21            if(prev->val == temp->val){
22
23                prev->next = temp->next;
24                temp = temp->next;
25
26            }
27
28            else{
29
30                prev = prev -> next;
31                temp = temp -> next;
32            }
33        }
34
35            prev -> next = NULL;
36
37    return head;
38
39    }
40};