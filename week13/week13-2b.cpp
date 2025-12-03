//week13-2b.cpp 學習計畫 Linked List 第1題
//中間練習的程式 練習new ListNode(999) 產生新的 node
//練習用ans->next 把node接起來
//LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);//不管題目,一律給999
        ListNode* ans2 = new ListNode(888);//不管題目,一律給888
        ans->next = ans2;//接起來
        return ans;//這個程式,將可以把node 999的下一個,接888
    }
};
