#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string isPrime(int n) {
        if(n <= 1) return "No";   // 0 and 1 are not prime
        if(n == 2) return "Yes";  // 2 is prime

        // Check divisibility from 2 to sqrt(n)
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) return "No";  // divisible → not prime
        }
        return "Yes"; // no divisors → prime
    }
};
