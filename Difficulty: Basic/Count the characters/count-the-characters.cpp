#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getCount(string S, int N) {
        unordered_map<char, int> freq;

        string filtered;
        filtered.push_back(S[0]);
        for (int i = 1; i < S.size(); i++) {
            if (S[i] != S[i - 1])
                filtered.push_back(S[i]);
        }

        for (char c : filtered)
            freq[c]++;

        int count = 0;
        for (auto &p : freq) {
            if (p.second == N)
                count++;
        }

        return count;
    }
};
