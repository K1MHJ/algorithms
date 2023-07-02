#include <iostream>
using namespace std;
int main()
{
  int p[6];
  for(int i = 0;i<6;i++){
    cin >> p[i];
  }
  for(int x = -999;x<=999;x++){
    for(int y = -999;y<=999;y++){
      if((x * p[0] + y * p[1] == p[2]) &&
         (x * p[3] + y * p[4] == p[5])){
        cout << x << " " << y;
        return 0;
      }
    }
  }
  return 0;
}
