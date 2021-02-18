// #include <iostream>
// using namespace std;
// // no 1 līdz 100
// int main() {
//   for(int i = 1; i < 101; i = i + 1)
//   {
//     cout << i <<endl;
//   }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// // no 20 līdz 40
// int main() {
//   for(int i = 20; i <= 40; i = i + 2)
//   {
//     cout << i <<endl;
//   }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// // no 50 līdz 0
// int main() {
//   for(int i = 50; i >= 0; i = i - 1)
//   {
//     cout << i <<endl;
//   }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// // no 50 līdz 0
// int main() {
//   int starp = 1;
//   for(int i = 50; i <= 100; i = i + starp++ )
 
//   {
//     cout << i <<endl;
  
//   }
//   return 0;
// } 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int skSk = 0, atz = 0, sum = 0;
//     cin >> skSk;
//     for(int i = 0; i < skSk; i = i + 1)
//     {
//         cin >> atz;
//         sum = sum + atz;
//     }
//     cout << sum / skSk;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "";
// //    cin >> s;
//     getline(cin, s);
//     int bSk = s.size();
//     for(int nr = 0; nr < bSk; nr++)
//     {
//         if(s[nr] == ' ')
//         {
//             s[nr] = '\n';
//         }
//     }
//     cout << s;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    int bSk = s.size();
    for(int nr = bSk - 1; nr >= 0; nr--)
    {
        cout << s[nr];
    }
    return 0;
}