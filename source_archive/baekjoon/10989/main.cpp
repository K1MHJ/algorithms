#include <iostream>
using namespace std;
int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int N;
  int M;
  int arr[10000+1];
  cin >> N;
  for(int i=0;i<=10000;i++){
    arr[i] = 0;
  }
  for(int i=0;i<N;i++){
    cin >> M;
    arr[M]+=1;
  }
  for(int i=0;i<=10000;i++){
    if(arr[i] == 0){
      continue;
    }
    else{
      for(int j =0;j<arr[i];j++){
        cout << i << '\n';
      }
    }
  }
  return 0;
}
