#include <iostream>
#include <string>
using namespace std;

void reverse(char* str) {
  char memo;
  int length = 0;

  while(str[length] != '\0') {
    length++;
  }

  cout << length << endl;
  length -= 1;
  int middle = length/2;
  for(int i=0; i<=middle; i++) {
    memo = str[i];
    str[i] = str[length];
    str[length] = memo;
    length--;
  }
}

int main(void) {
  char* str;
  cout << "please input string" << endl;
  cin >> str;
  cout << "" << endl;
  reverse(str);
  cout << str << endl;
  return 0;
}
