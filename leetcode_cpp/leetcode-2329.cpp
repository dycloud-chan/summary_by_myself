#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


class Solution2329 {
public:
    int halfQuestions(vector<int>& questions) {
        int persons = questions.size() / 2;
        // sort(questions.begin(), questions.end(), [](int a, int b){return a > b;});
        unordered_map<int, int> records;
        for (auto val: questions) {
            records[val]++;
        }

        vector<int> cnts;
        for (const auto &[key, value]: records) {
            cnts.push_back(value);
        }
        sort(cnts.begin(), cnts.end(), [](int a, int b){return a > b;});
        int ans = 0;
        for (auto ele: cnts) {
            if (persons - ele < 0) {
                ans++;
                break;
            }
            persons -= ele;
        }
        return ans;
    }
};

