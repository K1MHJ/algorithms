#include <iostream>
#include <vector>

using namespace std;
int n;
int m;
int target_score;
int max_score;
int card[100];
vector<int> vcard;


void dfs(int cnt)
{
  if(vcard.size() == m){
    long sum = 0;
    for(auto i:vcard){
      sum += i;
    }
    if(sum <= target_score){
      if(sum > max_score){
        max_score = sum;
      }
    }
    return;
  }
  for(int i = cnt;i<n;i++){
    if(vcard.size() < m){
      vcard.push_back(card[i]);
      dfs(i + 1);
      vcard.pop_back();
    }
  }
}
int main()
{
  m = 3;
  cin >> n;
  cin >> target_score;
  for(int i=0;i<n;i++){
      cin >> card[i];
  } 
  dfs(0);
  cout << max_score;
  return 0;
}

