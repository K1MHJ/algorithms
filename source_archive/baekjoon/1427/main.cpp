#include <iostream>
using namespace std;

bool compare(char a,char b){
	if (a<=b)
		return true;
	return false;
}
void swap(char &a,char &b){
	char tmp;
	tmp=a;
	a=b;
	b=tmp;
}

int main()
{
  char N[12];
  cin >> N;
  int len = 0;
  for(int i = 0;i<12;i++){
    if(N[i] == 0x00){
      len = i;
      break;
    }
  }
  int min_index = 0;
  for(size_t i = 0;i<len-1;++i){
    min_index = i;
    for(size_t j = i+1;j<len;++j){
      if(compare(N[min_index], N[j])){
        min_index = j;
      }
    }
    if(i != min_index){
      swap(N[min_index], N[i]);
    }
  }
  cout << N;
  return 0;
}
