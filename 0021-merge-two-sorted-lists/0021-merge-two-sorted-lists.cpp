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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* output = new ListNode();
//         ListNode* outputStart = output;
//         while(list1 != nullptr && list2 != nullptr) {
//             if(list1->val <= list2->val) {
//                 output = list1;
//                 list1 = list1->next;
//             } else {
//                 output = list2;
//                 list2 = list2->next;
//             }
//             output = output->next;
//         }
        
//         if(list1 == nullptr) {
//             output = list2;
//         } else if (list2 == nullptr) {
//             output = list1;
//         }
        
//         return outputStart;
//     }
    
    
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = NULL;
        head = list1;
        if(list1 == NULL && list2 == NULL) {
            return NULL;
        } else if (list1 == NULL) {
            return list2;
        } else if (list2 == NULL) {
            return list1;
        }
        // return output;
        if(list1->val > list2->val) {
            head = list2;
            list2 = list2->next;
        } else {
            head = list1;
            list1 = list1->next;
        }
        
        ListNode *curr = head;
        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        
        if (list1 == NULL) {
            curr->next = list2;
        } else {
            curr->next = list1;
        }
        return head;

        
        
        
    }
};