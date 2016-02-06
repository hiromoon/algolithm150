#include <iostream>
using namespace std;

int getLastIndex(char* str) {
  int index;
  while(str[index++] != '\0');
  return index - 2;
}

char* compless(char* str) {
  int lastIndex = getLastIndex(str);
  int index = 0;
  int length = 0;
  int count = 1;
  char lastChar = str[index++];
  char complessed[20];

  do {
    if (str[index] == lastChar) {
      count++;
    } else {
      complessed[length++] = lastChar;
      complessed[length++] = '0' + count;
      lastChar = str[index];
      count = 1;
    }
    index++;
  } while (index <= lastIndex + 1);

  complessed[length] = '\0';
  if (lastIndex >= length) {
      strcpy(str, complessed);
  }

  return str;
}

int main(void) {
  char str[20];
  strcpy(str, "aabbbccaa");
  cout << compless(str) << endl;
  return 0;
}
