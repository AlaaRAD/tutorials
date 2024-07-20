#include <iostream>



class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {

        std::string subString = "";
        int max =0;

        for (char c : s)
        {
        if (subString.find(c) == std::string::npos)
        {
            subString += c;
            if (subString.length() > max)
            {
                max = subString.length();
            }

        }
        else
        {
            subString = "";
            subString += c;
        }

        }
            return max;
    }
};



int main()
{
    std::string s = "abcabcbbabcdef";
    Solution sol;
    std::cout << sol.lengthOfLongestSubstring(s) << std::endl;
    return 0;
}
