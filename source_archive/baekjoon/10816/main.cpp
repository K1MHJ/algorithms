#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_ELE 500001
typedef struct{
  int card_no;
  int order;
  int count;
}stFindCard;

bool compare_number(stFindCard &lh, stFindCard & rh)
{
  return lh.card_no < rh.card_no;
}
bool compare_order(stFindCard &lh, stFindCard & rh)
{
  return lh.order < rh.order;
}
bool compare(int &lh, int & rh)
{
  return lh < rh;
}

int main()
{
  int N;
  int M;
  int hasCards[MAX_ELE];
  stFindCard findCards[MAX_ELE];
  int card;

  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  cin >> N;
  for(int i = 0;i<N;i++){
    cin >> card; 
    hasCards[i] = card;
  }
  sort(hasCards,hasCards+N,compare);

  cin >> M;
  for(int i = 0;i<M;i++){
    stFindCard c;
    c.count = 0;
    c.order = i;
    cin >> c.card_no;
    findCards[i] = c;
  }
  sort(findCards,findCards+M,compare_number);
  int j = 0;
  int last_findcard = 0;
  int last_findcount = 0;
  for(int i = 0;i<M;i++){
    if(i > 0){
      if(last_findcard == findCards[i].card_no){
        findCards[i].count = last_findcount;
        continue;
      }
    }
    for(;j<N;j++){
      if(hasCards[j] == findCards[i].card_no){
        findCards[i].count++;
        last_findcard = findCards[i].card_no;
        last_findcount = findCards[i].count;
      }else if(findCards[i].card_no < hasCards[j]){
        // j -= findCards[i].count;
        break;
      }
    }
  }
  sort(findCards,findCards+M,compare_order);
  for(int i = 0;i<M;i++){
    cout << findCards[i].count;
    if(i < M-1){
      cout << ' ';
    }
  }
  return 0;
}
