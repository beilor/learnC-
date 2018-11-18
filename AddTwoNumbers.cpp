

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *n1 = l1, *n2 = l2, *n1Pre = NULL, *n2Pre = NULL;
    unsigned char flag = 0;
    while (n1 != NULL && n2 != NULL) {
        n1->val = n1->val + n2->val + flag;
        if (n1->val >= 10) {
            n1->val = n1->val -10;
            flag = 1;
        }
        else {
            flag = 0;
        }
        n2->val = n1->val;
        n1Pre = n1;
        n2Pre = n2;
        n1 = n1->next;
        n2 = n2->next;
    }
    if ( n1 != NULL) {
        while ( n1 != NULL) {
            n1->val = n1->val + flag;
            if (n1->val >= 10) {
                n1->val =n1->val - 10;
                flag = 1;
            }
            else {
                flag = 0;
            }
            n1Pre = n1;
            n1 = n1->next;
        }
        if (flag == 1) {
                struct ListNode *NodeAdd = (struct ListNode*)malloc(sizeof(struct ListNode));
                NodeAdd->val = 1;
                NodeAdd->next = NULL;
                n1Pre->next = NodeAdd;
        }
        return l1;
    }
    else if (n2 != NULL) {
        while ( n2 != NULL) {
            n2->val = n2->val + flag;
            if (n2->val >= 10) {
                n2->val =n2->val - 10;
                flag = 1;
            }
            else {
                flag = 0;
            }
            n2Pre = n2;
            n2 = n2->next;
        }
        if (flag == 1) {
                struct ListNode *NodeAdd = (struct ListNode*)malloc(sizeof(struct ListNode));
                NodeAdd->val = 1;
                NodeAdd->next = NULL;
                n2Pre->next = NodeAdd;
        }
        return l2;
    }
    else {
        if (flag == 1) {
            struct ListNode *NodeAdd = (struct ListNode*)malloc(sizeof(struct ListNode));
            NodeAdd->val = 1;
            NodeAdd->next = NULL;
            n1Pre->next = NodeAdd;
        }
        return l1;
    }
}