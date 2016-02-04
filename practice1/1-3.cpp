#include <iostream>
using namespace std;

void check(char* str1, char* str2) {
  int length = 0;
  int index = 0;
  int count = 0;
  int i = 0;
  int j = 0;
  int flag = 0;

  while (1) {
    if (str1[length] != '\0') {
      length++;
    } else {
      break;
    }
  };

  while (1) {
    if (str2[index] != '\0') {
      index++;
    } else {
      break;
    }
  };

  if (length != index) {
    cout << "not anagram" << endl;
    return;
  }

  while(str1[i] != '\0') {
    cout << "1:" << str1[i] << endl;
    while(str2[j] != '\0') {
      cout << "2:" << str2[j] << endl;
      if (str1[i] == str2[j]) {
        flag = 1;
        break;
      }
      j++;
    }
    if(str2[j] == '\0') {
      if(flag == 0) {
        cout << "not anagram" << endl;
        return;
      } else {
        flag = 0;
        j=0;
        continue;
      }
    }
    j=0;
    i++;
  }
    cout << "anagram" <<endl;
  return;
}

int main(void) {
  char str1[10];
  char str2[10];

  cout << "please input first string" << endl;
  cin >> str1;
  cout << "please input second string" << endl;
  cin >> str2;
  check(str1, str2);
  return 0;
}
