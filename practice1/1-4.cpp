#include <iostream>
using namespace std;

int getLastIndex(char* str) {
  int index = 0;
  while (str[index++] != '\0');
  while (1) {
    index--;
    if (str[index] != ' ' && str[index] != '\0') break;
  }
  cout << index << endl;
  return index;
}

void replaceSpace(char* str) {
  int lastIndex = getLastIndex(str);
  char replaced[100];
  char index = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      replaced[index++] = '%';
      replaced[index++] = '2';
      replaced[index++] = '0';
    } else {
      replaced[index++] = str[i];
    }
    if(i == lastIndex) break;
  }
  replaced[index] = '\0';
  cout << replaced << endl;
}

int main(void) {
  char str[] = "Mr. Jhon Smith   ";
  replaceSpace(str);
  return 0;
}
