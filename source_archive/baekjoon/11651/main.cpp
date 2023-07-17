#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct{
  int x;
  int y;
}Pnt;
bool compareInterval(Pnt &i1, Pnt &i2)
{
  if(i1.y == i2.y){
    return i1.x <= i2.x;
  }
  return i1.y <= i2.y;
}
int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  vector<Pnt> pnts;
  cin >> N;
  for(int i = 0;i<N;i++){
    Pnt pnt;
    cin >> pnt.x;
    cin >> pnt.y;
    pnts.push_back(pnt);
  }
  sort(pnts.begin(),pnts.end(),compareInterval);
  for(int i = 0;i<N;i++){
    cout << pnts[i].x << ' ' << pnts[i].y << '\n';
  }
  return 0;
}
