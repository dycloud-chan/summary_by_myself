#include <iostream>
#include <vector>

#include "leetcode_cpp/leetcode-389.cpp"
#include "leetcode_cpp/leetcode-2329.cpp"

using namespace std;


void test_389() {
    Solution389 obj = Solution389();
    auto val = obj.findTheDifference("abcd", "abccd");
    cout << val << endl;
}

void test_2329() {
    vector<int> args = {1, 5, 1,3,4,5,2,5,3,3,8,6};
    Solution2329 obj = Solution2329();
    auto val = obj.halfQuestions(args);
    cout << val << endl;
}


int main() {
    test_2329();
    return 0;
}

