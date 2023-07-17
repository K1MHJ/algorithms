#include <iostream>
using namespace std;

int main()
{
  int i;
  int N;
  cin >> N;
  int arr[1000001];
  arr[0] = 0;
  for(int n = 1;n<=1000000;n++){
    i = arr[n-1];
    if(!(n%2)) {
      i = min(i, arr[n/2]);
    }
    if(!(n%3)) {
      i = min(i, arr[n/3]);
    }
    if(n == 1){
      arr[n] = i;
    }else{
      arr[n] = i+1;
    }
    if(n == N){
      cout << arr[n];
      break;
    }
  }
  return 0;
}
