#include <iostream>
using namespace std;
int main()
{
  int n;
  int sum;
  cin >> n;
  for(int j = 0;j<n;j++){
    int i = j;
    sum = 0;
    while(true){
      if(i / 10 == 0 && i % 10 == 0){
        break;
      }
      sum += i % 10;
      i /= 10;
    }
    if(n - j == sum){
      cout << j;
      return 0;
    }
  }
  cout << 0;
  return 0;
}
