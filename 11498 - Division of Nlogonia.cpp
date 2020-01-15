#include <iostream>

using namespace std;

int main (){

  std::ios::sync_with_stdio(false);
  int casos = 0, rango_x = 0, rango_y = 0, x = 0, y = 0, i;

  do {
    std::cin >> casos;
    if (casos == 0)
      break;
    std::cin >> rango_x >> rango_y;

    for (i = 0; i < casos; ++i){

      std::cin >>x >> y;

      if (x == rango_x || y == rango_y)
        std::cout << "divisa" << '\n';

      else{
        if (x < rango_x && y > rango_y)
          std::cout << "NO" << '\n';
        else {
          if (x > rango_x && y > rango_y)
            std::cout << "NE" << '\n';
          else {
            if (x > rango_x && y < rango_y)
              std::cout << "SE" << '\n';
            else
              std::cout << "SO" << '\n';
          }
        }
      }
    }
  } while(true);

  return 0;
}
