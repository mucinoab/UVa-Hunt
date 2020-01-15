#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  string a, b;
  long unsigned int x, y, c;
  bool l = 1;
  getline (cin, a);
  while (a != "DONE"){
    for (x = 0; x < a.length(); x++)
      if (isalpha(a[x]))
        b.append(1, tolower(a[x]));

    for (y = 0, c = b.length()-1; y < b.length() ; y++, c--)
      if (b[y] != b[c]){
        l = 0;
        break;
      }

    if (l == 0){
      cout << "Uh oh.." << '\n';
      l = 1;
    }
    else
      cout << "You won't be eaten!" << '\n';

    b.clear();
    a.clear();
    getline (cin,a);
  }
  return 0;
}
