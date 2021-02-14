#include <iostream>
using namespace std;
// Atrodi lielāko no 2 skaitļiem.
int main() {
  int x, y;
cout << "Ievadi pirmo skaitli: ";
cin >> x;
cout << "Ievadi otro skaitli: ";
cin >> y;
  if (x > y) {
    cout << "Lielakais skaitlis ir \n";
    cout << x;
  }  
  else {
    cout << "Lielakais skaitlis ir \n";
    cout << y;
  }
  return 0;
}