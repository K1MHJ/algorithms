#include <iostream>
using namespace std;
int main()
{
  int N;
  int Ans;
  cin >> N;
  for(int a = 0; a <= 5000/3 ;a++){
    if((N + 2 * a) % 5 == 0){
      Ans = (N + 2 * a) / 5;
      if(Ans - a >= 0){
        cout << Ans;
        return 0;
      }else{
        break;
      }
    }
  }
  cout << -1;
  return 0;
}
