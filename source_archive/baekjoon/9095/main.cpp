#include <iostream>
using namespace std;

int main()
{
  int a[11] = {0};
  int T,N;
  int b;

  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  cin >> T;
  a[1] = 1;
  a[2] = 2;
  a[3] = 4;
  for(int i = 4;i<11;i++){
    a[i] = a[i-1]+a[i-2]+a[i-3];
  }
  for(int i = 0;i<T;i++){
    cin >> N; 
    cout << a[N];
    if(i<T-1){
      cout << '\n';
    }
  }
  return 0;
}
