#include <iostream>
#include <random>
#include <map>
using namespace std;

int array[10][10];
random_device rnd;
int col[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
int row[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};

void init(){
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      array[i][j] = rnd()%10;
    }
  }
}

void printArr() {
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      cout << "\t" << array[i][j];
    }
    cout << "" << endl;
  }
}

void findZero() {
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      if (array[i][j]==0) {
          col[i] = 0;
          row[j] = 0;
      }
    }
  }
}

int main(void) {
  init();
  printArr();
  findZero();

  for(int it = 0; it < 10; it++) {
    if(row[it] != 100) {
      for (int i=0; i<10; i++) {
        array[i][it] = 0;
      }
    }
    if(col[it] != 100) {
      for (int j=0; j<10; j++) {
        array[it][j] = 0;
      }
    }
  }
  cout << "================" << endl;
  printArr();
  return 0;
}
