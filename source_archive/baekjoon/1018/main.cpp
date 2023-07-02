#include <iostream>
using namespace std;
char BOARD[50][50];
void reset()
{
  for(int y = 0;y<50;y++){
    for(int x = 0;x<50;x++){
      BOARD[y][x] = '-';
    }
  }
}
int main()
{
  int N,M;
  reset();
  cin >> N;
  cin >> M;
  for(int y = 0;y<N;y++){
    for(int x = 0;x<M;x++){
      cin >> BOARD[y][x];
    }
  }
  char lt;
  int draw;
  int min_draw = 50 * 50;
  for(int dy = 0;dy <= N - 8;dy++){
    for(int dx = 0;dx <= M - 8;dx++){
      for(int i = 0;i<2;i++){
        if(i == 0){
          lt = 'B';
        }else{
          lt = 'W';
        }
        draw = 0;
        for(int y = dy;y<8+dy;y++){
          for(int x = dx;x<8+dx;x++){
            char cell = BOARD[y][x];
            if((y - dy) % 2 == 0){
              if((x - dx) % 2 == 0){
                if(lt != cell){
                  draw++;
                }
              }else{
                if(lt == cell){
                  draw++;
                }
              }
            }else{
              if((x - dx) % 2 == 0){
                if(lt == cell){
                  draw++;
                }
              }else{
                if(lt != cell){
                  draw++;
                }
              }
            }
          }
        }
        if(draw < min_draw){
          min_draw = draw;
        }
      }
    }
  }
  cout << min_draw;
  return 0;
}
