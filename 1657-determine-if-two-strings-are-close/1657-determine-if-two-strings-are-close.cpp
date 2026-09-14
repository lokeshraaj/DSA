class Solution {
public:
    bool closeStrings(string word1, string word2) {

        // Error 1: Different lengths
    if (word1.size() != word2.size())
    {
        return false;
    }

    unordered_map<char, int> m1, m2;

    // Count letters in word1
    for (int i = 0; i < word1.size(); i++)
    {
        m1[word1[i]]++;
    }

    // Count letters in word2
    for (int i = 0; i < word2.size(); i++)
    {
        m2[word2[i]]++;   // FIXED: word2[i]
    }

    // ensure char are same
    for (auto m : m1)
    {
        if (m2.find(m.first) == m2.end())
        {
            return false;
        }
    }

    // Check for freq 
    for (auto m : m1)
    {
        bool found = false;

        for (auto &n : m2)
        {
            if (n.second == m.second)
            {
                n.second = -1;   // freq used
                found = true; 
                break;
            }
        }

        if (!found)
        {
            return false;
        }
    }

    return true;
    }
};