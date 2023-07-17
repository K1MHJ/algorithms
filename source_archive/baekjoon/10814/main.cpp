#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef struct{
  unsigned int id;
  unsigned short age;
  string name;
}Member;
bool compareInterval(Member &i1, Member &i2)
{
  if(i1.age == i2.age){
    return i1.id < i2.id;
  }
  return i1.age < i2.age;
}
int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  vector<Member> members;
  cin >> N;
  for(int i = 0;i<N;i++){
    Member member;
    member.id = i;
    cin >> member.age;
    cin >> member.name;
    members.push_back(member);
  }
  sort(members.begin(),members.end(),compareInterval);
  for(int i = 0;i<N;i++){
    cout << members[i].age << ' ' <<members[i].name <<'\n';
  }
  return 0;
}
