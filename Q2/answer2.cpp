//Given a string, find the length of the longest substring without repeating characters.The function should return an integer representing the length of the longest substring without repeating characters.


int lengthOfLongestSubstring(string s) 
{
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (charSet.count(s[right]) == 0) {
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            } else {
                while (charSet.count(s[right])) {
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
        }
        
        return maxLength;
}