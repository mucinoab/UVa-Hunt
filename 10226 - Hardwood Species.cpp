#include <iostream>
#include <map>
using namespace std;

int main(void){
  map <string, int> ar;
  int n;
  long double s = 0, c = 0;
  string nom;
  cin >> n;

  cin.ignore();
  cin.ignore();
  for (int x = 0; x < n; x++){
    if (x != 0)
      cout << '\n';
    while(getline(cin, nom) && nom != "" ){
      ar[nom]++;
      c++;
    }
    for (map<string, int>::iterator it = ar.begin(); it != ar.end(); it++){
      s = it->second/c;
      cout << it->first <<' ';
      printf("%.4Lf\n", (s*100));
    }
    s = 0;
    c = 0;
    ar.clear();
  }
  return 0;
}
