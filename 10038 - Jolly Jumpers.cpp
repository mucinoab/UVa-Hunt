#include <iostream>
using namespace std;

int main(){
  int n, p, x, y, sigma, sum, delta;  
  bool b = 1;

  while (cin >> n){
    
    sigma = ((n-1)*n)/2; //suma de 1 a n-1
    sum = 0; // suma de las diferencias

    cin >> x;
    
    for (y = 1; y < n; y++){

      cin >> p;

      delta = abs(p-x);
      sum += delta;
      
      if (delta == 0 || n <= delta)
        b = 0;
      
      x = p;  
    }
    
    if (sum == sigma && b == 1) 
      cout << "Jolly\n";
    else{
      b = 1;
      cout << "Not jolly\n";
    }
  } 
  return 0;
}