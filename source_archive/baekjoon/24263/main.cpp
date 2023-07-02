#include <stdio.h>

char A[500001];
long long count;

char MenOfPassion(char *a, int n)
{
  char sum = 0;
  for(int i=1;i<=n;i++){
    count++;
    sum += a[i];
  }
  return sum;
}

int main()
{
  long long n;
  int leading_coefficient;
  long long m[2];
  count = 0;
  for(int i=0;i<500001;i++){
    A[i] = 0;
  }
  scanf("%lld", &n);
  MenOfPassion(A, n);
  printf("%lld\n", count);
  leading_coefficient = 0;
  m[0] = 1;
  m[1] = n;
  while(true){
    if(leading_coefficient > 3){
      leading_coefficient = 4;
      break;
    }
    if(count == 1){
      leading_coefficient = 1;
      break;
    }
    if((m[0] < m[1] && m[0] <= count && count < m[1]) ||
       (m[0] == m[1] && m[0] == count)){
      break;
    }
    m[0] *= n;
    m[1] *= n;
    leading_coefficient++;
  }
  printf("%d\n", leading_coefficient);
  return 0;
}

