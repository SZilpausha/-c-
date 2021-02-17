#include <iostream>
using namespace std;
// Atrodi lielāko no 3 skaitļiem.
int main() {
  int x, y, c;
cout << "Ievadi tris skaitlus intervalā [-10000; 10000] (skaitļiem jābūt atdalītiem ar tukšumsimbolu): ";
cin >> x >> y >> c;
int max = x;
if (y > max) {
        max = y;
    }
    if (c > max) {
        max = c;
    }
    cout << max << endl;
  return 0;
}
