class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        vector<int> ans;

        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        // Reverse the vector
        reverse(ans.begin(), ans.end());

        // Nth element from end is now nth element from beginning
        ans.erase(ans.begin() + n - 1);

        // Reverse back
        reverse(ans.begin(), ans.end());

        // Copy values back
        temp = head;

        for (int i = 0; i < ans.size(); i++) {
            temp->val = ans[i];
            temp = temp->next;
        }

        // Remove the extra last node
        temp = head;

        if (ans.empty()) {
            delete head;
            return nullptr;
        }

        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;

        return head;
    }
};