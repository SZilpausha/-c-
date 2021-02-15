#include <iostream>
using namespace std;
// Pārbaudīt vai skaitlis atrodas starp diviem dotajiem skaitļiem!
int main() {
  int x, y, c;
cout << "Ievadi divi skaitļi ar atstarpem un nospiež Enter: ";
cin >> x >> y;

cout << "Ievadi vienu skaitli: \n";
cin >> c;
  if (x < c && c < y) {
    cout << "ir ";
  }  
  else {
    cout << "nav";
  }
  return 0;
}