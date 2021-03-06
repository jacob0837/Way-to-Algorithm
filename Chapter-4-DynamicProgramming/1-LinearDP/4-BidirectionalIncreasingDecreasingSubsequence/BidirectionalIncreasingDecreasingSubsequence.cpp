#include "BidirectionalIncreasingDecreasingSubsequence.hpp"
#include <cassert>
// #include <iostream>
using namespace std;

#define TEST_MAX 1024

struct LISTest {
    int a[MAX];
    int n;
    int result;
} test_cases[] = {
    { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 10, 10 },   // 0
    { { 0, 1, 3, 5, 7, 9, 11, 13, 15, 17 }, 9, 9 },     // 1
    { { 0, 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 }, 10, 6 },    // 2
    { { 0, 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 }, 10, 5 },    // 3
    { { 0, 10, 2, 9, 4, 8, 6, 7, 8, 6, 10 }, 10, 6 },   // 4
    { { 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }, 10, 1 },    // 5
    { { 0, 1, 2, 8, 7, 4, 3, 4, 3, 2, 1 }, 10, 4 },     // 6
    { { 0, 1, 20, 3, 40, 5, 6, 7, 80, 90, 10 }, 10, 7 },        // 7
    { { 0, 5, 6, 11, 4, 9, 0, 34, 21, -13, 17, 3 }, 11, 4 },    // 8
    { { 0, 1, 1, 5, 4, 9, 7, 31, -13, 34, 21, 17 }, 11, 6 },    // 9
    { { 0, 42, 42, -5, 14, 215, 45, -42, 1, 31, 0, 12, 142, -5, 14, 15, 45, 42, 61, 41 }, 19, 7 },      // 10
    { { 0, 12, 142, -5, 14, 15, 45, 42, 61, 41, 0, 42, 42, -5, 14, 215, 45, -42, 1, 31 }, 19, 7 },      // 11
};


int main()
{
    int count = sizeof(test_cases) / sizeof(LISTest);
    for (int i = 0; i < count; i++) {
        LISTest & t = test_cases[i];
        int r = LongestIncreasingSubsequenceExtension(t.a, t.n);
        // cout << i << "," << r << endl;
        assert(r == t.result);
    }

    return 0;
}
