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
    ListNode* removeElements(ListNode* head, int val) {
       //设置虚拟头指针
        ListNode* now = new ListNode();
        //虚拟头指针的next指向head
        now->next = head;
        //cur指向虚拟头指针
        ListNode* cur = now;
        //使用cur的next作为条件循环
        while(cur->next != nullptr){
            if(cur->next->val == val){
                ListNode *h = cur->next;
                cur->next=cur->next->next;
                delete h;
            }
            else
            {
                cur=cur->next;
            }
        }
        //零时指针指向虚拟头指针的next
        ListNode *tmp=now->next;
        //删除虚拟头指针
        delete now;
        //返回临时指针
        return tmp;
    }
};