#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef struct{
  int val;
  int order;
  int result;
}stIn;
bool compare_val(stIn &lh, stIn &rh)
{
  return (lh.val <= rh.val);
}
bool compare_order(stIn &lh, stIn &rh)
{
  return (lh.order <= rh.order);
}
int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int N;
  stIn arr[1000000+1];
  cin >> N;
  for(int i = 0;i<N;i++){
    stIn in;
    cin >> in.val;
    in.result = 0;
    in.order = i;
    arr[i] = in;
  }
  sort(arr,arr + N,compare_val);
  int result;
  result = 0;
  arr[0].result = result; 
  for(int i = 1;i<N;i++){
    if(arr[i].val != arr[i-1].val){
      result++;
    }
    arr[i].result = result;
  }
  sort(arr,arr+N,compare_order);
  for(int i = 0;i<N;i++){
    cout << arr[i].result;
    if(i < N-1){
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
