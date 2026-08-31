class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> lastIndex(128, -1);
        
        int maxLength = 0;
        int left = 0; // Left boundary of the sliding window
        
        for (int right = 0; right < s.length(); ++right) {
            char current_char = s[right];
            
            // If the character is already inside the current window, 
            // shrink the window by moving the left pointer past its previous occurrence
            if (lastIndex[current_char] >= left) {
                left = lastIndex[current_char] + 1;
            }
            
            // Update the last seen position of the character
            lastIndex[current_char] = right;
            
            // Calculate the current window length and update the max length
            maxLength = std::max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};