#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long> devil_num;
string temp;

bool isDevil(long n)
{
  temp = to_string(n);
  //char const* num_array = temp.c_str();
  for(int i = 0;i<temp.length();i++){
    if(temp.length() - i >= 3 && temp.at(i) == '6'){
      if(temp.at(i+1) == '6' && temp.at(i+2) == '6'){
        return true;
      }
    }
  }
  return false;
}
int main()
{
  int N;
  long i;
  cin >> N;
  for(i=0;i<=3599999;i++){
    if(isDevil(i)){
      devil_num.push_back(i);
    }
  }
  sort(devil_num.begin(),devil_num.end());
  cout << devil_num[N-1];
  return 0;
}

