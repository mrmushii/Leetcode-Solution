#include <iostream>
#include <vector>
#include <string>
using namespace std;

int min_length(const string &s) {
    vector<char> vec(s.begin(), s.end());
    int i = 0;
    while (i < vec.size() - 1) {
        if (vec[i] == vec[i+1]) {
            if (i > 0) {
                vec[i] = vec[i-1];
            } else {
                if (i + 2 < vec.size()) {
                    vec[i] = vec[i + 2];
                } else {
                    vec[i] = 'a'; // arbitrary choice
                }
            }
            vec.erase(vec.begin() + i + 1);
            i = max(i - 1, 0);
        } else {
            i++;
        }
    }
    return vec.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << min_length(s) << endl;
    }
    return 0;
}