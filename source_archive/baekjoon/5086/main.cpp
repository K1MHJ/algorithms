#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
  string line;
  string s;
  int n[2];
  while(std::getline(std::cin, line)){
    istringstream iss(line);
    for(int i=0;i<2;i++){
      if(getline(iss,s,' ')){
        n[i] = atoi(s.c_str());
      }
    }
    if(n[0] == 0 && n[1] == 0){
      break;
    }
    if(n[1] % n[0] == 0){
      cout << "factor";
    }else{
      if(n[0] % n[1] == 0){
        cout << "multiple";
      }else{
        cout << "neither";
      }
    }
    cout << endl;
  }
  return 0;
}
