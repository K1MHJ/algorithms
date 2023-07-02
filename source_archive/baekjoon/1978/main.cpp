#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
  int N;
  string strIN;
  int num = 0;
  int in;
  int n;
  bool isPrimeNumber; 
  cin >> N;
  cin.ignore();
  std::getline(std::cin, strIN);
  istringstream iss(strIN);
  string s;
  while(getline(iss, s, ' ')){
    in = atoi(s.c_str());
    
    isPrimeNumber = true;
    if(in == 1 || in == 0){
      continue;
    }
    for(n=2;n<in;n++){
      if(in % n == 0){
        isPrimeNumber = false;
        break;
      }
    }
    if(isPrimeNumber){
      num++;
    }
  }
  cout << num << endl;
  return 0;
}
