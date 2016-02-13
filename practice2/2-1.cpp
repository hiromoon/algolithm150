#include <list>
#include <iostream>
#include <random>
using namespace std;
random_device rnd;


int main(void) {
    list<int> arrayList;
    list<int> tmp;

    for(int i=0; i<100; i++) {
      arrayList.push_back(rnd()%100);
    }

    list<int>::iterator it = arrayList.begin();
    while(it != arrayList.end()) {
      cout << *it << ",";
      ++it;
    }
    cout << endl;
    cout << "------------------" << endl;
    arrayList.sort();
    arrayList.unique();
    it = arrayList.begin();
    while(it != arrayList.end()) {
      cout << *it << ",";
      ++it;
    }
    cout << endl;
    return 0;
}
