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
14        if(head==NULL || head->next == NULL) return head;
15        
16        ListNode* prev = head;
17        ListNode* temp = prev->next;
18
19        // while(temp != NULL){ // && temp->next != NULL why this is imp ?
20        //     if(prev->val == temp->val){
21        //         //while(prev )
22        //         prev->next = temp->next;
23        //         temp = temp ->next;
24        //     }
25        //     else{
26        //     prev= prev->next;
27        //     //prev = temp;
28        //     temp = temp -> next;
29        //     }
30        // }
31
32        while(temp!=NULL){
33            while(temp!=NULL && prev->val == temp->val){
34                temp = temp->next;
35            }
36            prev->next = temp;
37            prev = temp;
38            if(temp!=NULL) temp = temp->next;
39        }
40
41        return head;      
42    }
43};
44
45//[1,2,3]