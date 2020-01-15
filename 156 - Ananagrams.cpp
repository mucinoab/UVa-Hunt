#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main (){
  string a, p = "";
  map <string, string> pares;
  multiset<string> s;
  set <string> resultados;
  cin >> a;
  while (a != "#"){
    if (a.length() != 1){
      for (auto& x:a)
      p += tolower(x);
      sort(p.begin(), p.end());
      s.insert(p);
      pares[p] = a;
    }else
      resultados.insert(a);
    p ="";
    cin >> a;
  }
  for (auto& x:pares)
    if (s.count(x.first) == 1)
      resultados.insert(x.second);
  for (auto& x: resultados)
    cout << x << '\n';
  return 0;
}
