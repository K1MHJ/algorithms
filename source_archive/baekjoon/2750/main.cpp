#include <iostream>
using namespace std;
int N;
bool compare(int a,int b){
	if (a>=b)
		return true;
	return false;
}
void swap(int &a,int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void _quickSort(int* arr,int start,int end){
  int i,j;
  i = start;
  j = end;
  if(N==0)
    return;
  while(i<j){
    if(i<j && compare(arr[j], arr[i])){
      j--;
    }
    if(i<j){
      swap(arr[i], arr[j]);
    }
    if(i<j && compare(arr[j], arr[i])){
      i++;
    }
    if(i<j){
      swap(arr[i], arr[j]);
    }
  }
  if(i-1>start){
    _quickSort(arr,start,i-1);
  }
      
  if(j+1<end){
    _quickSort(arr,j+1,end);
  }
};
int main()
{
  int array[1001];
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> array[i];
  }
  _quickSort(array,0,N-1);
  for(int i=0;i<N;i++){
    cout << array[i] << endl;
  }
  return 0;
}
