#include <iostream>
#include "leetcode_cpp/leetcode-389.cpp"


using namespace std;



int main() {
    Solution389 obj = Solution389();
    auto val = obj.findTheDifference("abcd", "abccd");
    cout << val << endl;

    return 0;
}
