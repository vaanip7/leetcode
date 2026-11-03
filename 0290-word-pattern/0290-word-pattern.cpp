#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) {
        std::vector<std::string> words;
        std::string word;
        std::stringstream ss(s);
        while (ss >> word) {
            words.push_back(word);
        }
        if (pattern.length() != words.size()) {
            return false;
        }
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;
        
        for (int i = 0; i < pattern.length(); ++i) {
            char c = pattern[i];
            std::string w = words[i];
            if (charToWord.count(c) && charToWord[c] != w) {
                return false;
            }
            if (wordToChar.count(w) && wordToChar[w] != c) {
                return false;
            }
            charToWord[c] = w;
            wordToChar[w] = c;
        }
        return true;
    }
};
