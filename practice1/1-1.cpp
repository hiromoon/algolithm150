#include <iostream>
#include <string>
using namespace std;

int uniq(string s) {
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '\0') return -1;
        for (int j = i+1; j < s.length(); j++) {
            if (s[i] == s[j]) {
              return i;
            }
        }
    }
    return -1;
}

int main(void) {
  string str;
  cout << "please input String" << endl;
  cin >> str;
  if (uniq(str) < 0) {
      cout << "this string is uniq" << endl;
  } else {
      cout << "this string is not uniq" << endl;
  };
  return 0;
}
