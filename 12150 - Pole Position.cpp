#include <iostream>
#include <vector>
using namespace std;

int main (){
  int t, q, p, x;
  t = q = p = x = 0;
  bool y = true;
  vector <int> v;
  vector <int> s;

  cin >> t;
  vector <int> n((t+1), -1);

  while (t != 0){
    v.resize(t);
    s.resize(t);
    for (x = 0; x < t; x++)
      cin >> v[x] >> s[x];

    for (x = 0, p = 1; x < t; x++, p++){
      q = (s[x] + p);
      if ((q > t) || (q < 0)){
        y = false;
        break;
      }else{
        if (n[q] == -1)
          n[q] = v[x];
        else{
          y = false;
          break;
        }
      }
    }
    if (y == true)
      for (x = 1; x <= t; x++){
        if (x < t)
          cout << n[x] << ' ';
        else
          cout << n[x];
      }
    else{
      cout << -1;
      y = true;
    }
    cout << endl;
    cin >> t;
    v.assign(0, t);
    s.assign(0, t);
    n.assign((t+1) ,-1);
  }
  return 0;
}
