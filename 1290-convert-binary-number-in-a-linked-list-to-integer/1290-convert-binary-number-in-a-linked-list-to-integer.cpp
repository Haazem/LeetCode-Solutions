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
    int getDecimalValue(ListNode* head) {
        	string s = "";
	while( head != NULL)
	{
		s += to_string(head->val);
		head = head->next;
	}

	int count = 0 ;
	int ans = 0 ;
	for (int i = (int) s.size() - 1 ; i >= 0 ; i -- )
	{
		int a = s[i] - '0';
		int b = pow(2 , count) * a ;
		count ++;
		ans += b;
	}

	return ans;
    }
};