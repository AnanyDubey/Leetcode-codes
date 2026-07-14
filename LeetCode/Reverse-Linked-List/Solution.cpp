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
13    ListNode* reverseList(ListNode* head) {
14        if(head == NULL || head->next == NULL) return head;
15        ListNode* prev = NULL;
16        ListNode* curr = head;
17        ListNode* nxt = head->next;
18
19        while(curr != NULL && nxt != NULL){
20            curr->next = prev;
21            prev = curr;
22            curr = nxt;
23            nxt = curr->next;
24
25        }
26        curr->next = prev;
27        return curr;
28 
29    }
30};