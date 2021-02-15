#include <iostream>
using namespace std;
// Pārbaudīt vai skaitlis ir pāra skaitlis.
int main() {
  int x;
cout << "Ievadi skaitli a (0<a<100000): ";
cin >> x;
  if (x > 0 && x < 100000) {
       if (x % 2 == 0) {
          cout << "ir ";
        } else {
          cout << "nav";
        }
     }  
   else { 
      cout << "Skaitlis nepieder intervālam [0; 100000]!";
    }    
  return 0;
}
