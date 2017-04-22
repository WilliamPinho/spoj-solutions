#include <iostream>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  string s;
  while(t > 0) {
    cin >> s;
    string ans, aux;
    for(int i = 0; i < s.size(); ++i) {
      if(s[i] == ')') {
      	ans.push_back(aux.back());
      	aux.pop_back();
      } else if(isalpha(s[i])) {
      	ans.push_back(s[i]);
      } else if(s[i] != '(') {
      	aux.push_back(s[i]);
      }
    }
    cout << ans << endl;
    t--;
  }
}