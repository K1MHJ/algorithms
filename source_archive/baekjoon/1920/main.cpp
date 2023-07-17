#include <iostream>
using namespace std;
int *arr;
void quicksort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}

	int key = start;
	int i = start+1;
	int j = end;
	int temp;

	while (i <= j) {
		while (data[i] <= data[key]) {
			i++;
		}
		while (data[j] >= data[key] && j > start){
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}
bool binary_search(int target, int start, int end)
{
  int mid;
  if(start > end) return false;
  mid = (start + end) / 2;
  if(arr[mid] == target){
    return true;
  }else if(arr[mid] > target){
    return binary_search(target,start,mid-1);
  }else{
    return binary_search(target,mid+1,end);
  }
}
int main()
{
  ios::sync_with_stdio(0);
	cin.tie(0);

  int N,M;
  int f;

  cin >> N;
  arr = new int[N];
  for(int i = 0;i<N;i++){
    cin >> arr[i];
  }
  quicksort(arr,0,N-1);
  // sort(arr, arr+N, compare);
  cin >> M;
  for(int i = 0;i<M;i++){
    cin >> f;
    if(binary_search(f, 0, N-1)){
      cout << "1" << '\n';
    }else{
      cout << "0" << '\n';
    }
  }
  delete[] arr;
  return 0;
}
