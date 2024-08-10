class Solution {
public:
    bool isPalindrome(string s) {
         // Step 1: Filter the string to remove non-alphanumeric characters
        string filteredStr = "";
        for (char c : s) {
            if (std::isalnum(c)) {
                filteredStr += std::tolower(c);
            }
        }

        // Step 2: Check if the filtered string is a palindrome
        int left = 0;
        int right = filteredStr.size() - 1;

        while (left < right) {
            if (filteredStr[left] != filteredStr[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};