include <iostream>
 
using namespace std;

int main() {
    int t, left, right;
    string s;
    bool wasIncreased, firstDifferent;
    cin >> t;
    while(t > 0) {
        firstDifferent = true;
        wasIncreased = false;
        cin >> s;
        for(int i = (s.size()+1)/2; i < s.size(); ++i) {
            right = s[i];
            left = s[s.size()-i-1];
            if(left != right) {
                s[i] = s[s.size()-i-1];
                if(firstDifferent) {
                    firstDifferent = false;
                    if(left > right)
                        wasIncreased = true;
                }
            }
        }
        bool allNine = true;
        if(firstDifferent) { // was originally a palindrome
            for(int i = 0; i < s.size() && allNine; ++i)
                if(s[i] != '9') allNine = false;
            if(allNine) {
                s.assign(s.size(), '0');
                s[0] = '1';
                s.push_back('1');
                wasIncreased = true;
            }
        }
        if(!wasIncreased || (firstDifferent && !allNine)) {
            int val;
            for(int i = (s.size())/2; i < s.size(); ++i) {
                val = s[i] - '0';
                val++;
                if(val != 10) {
                    s[i] = val + '0';
                    s[s.size()-i-1] = val + '0';
                    break;
                }
                s[i] = '0';
                s[s.size()-i-1] = '0';
            }
        }
        cout << s << endl;
        t--;
    }
    return 0;
}