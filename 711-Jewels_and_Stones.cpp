#include <map>

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels_count = 0;

        map<char, char> table;
        
        for (char& c : J) table[c] = '';

        for (char& c: S) if (table.find(c) != table.end()) jewels_count++;

        return jewels_count;
    }
};