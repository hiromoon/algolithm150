#include <iostream>
#define N 5

using namespace std;

int array[N][N];
int answer[N][N];

void init() {
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      array[i][j] = i * N + j;
    }
  }
}

void printArr() {
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      cout << "\t" << array[i][j];
    }
    cout << "" << endl;
  }
}

void printRes() {
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      cout << "\t" << answer[i][j];
    }
    cout << "" << endl;
  }
}

void roll() {
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      answer[j][N-1-i] = array[i][j];
    }
  }
}

int main(void) {
  init();
  printArr();
  cout << "===============" << endl;
  roll();
  printRes();

  return 0;
}
