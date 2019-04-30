#include <map>

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels_count = 0;

        map<char, char> table;
        
        for (char& c : J) {
            table.insert(pair<char, char>(c, c));
        }

        for (char& c: S) {
            map<char, char>::iterator search = table.find(c);
            if (search != table.end()) {
                jewels_count++;
            }
        }

        return jewels_count;
    }
};