/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //反转链表三个指针，pre初始化为null，cur指向head，next初始为空
        ListNode *pre=nullptr;
        ListNode *cur=head;
        ListNode *next=nullptr;

        while(cur!=nullptr){//cur不为空时
            //next指向cur的next
            next=cur->next;
            //cur的next指向pre
            cur->next=pre;
            //pre指向cur
            pre=cur;
            //cur指向next
            cur=next;
        }
        return pre;
    }
};