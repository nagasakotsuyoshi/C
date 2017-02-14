//２進数4桁のビット列を二つ表示させる
#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, j, k, count, zero;
  int binary[8];
  k = 0;//初期化

//範囲を指定
  while(k < 256){
    j = k;
    //必要な0の分を数える
    count = 0;
    for(i=0;j>0;i++){
      //余りを配列に入れる
      binary[i] = j % 2;
      j = j / 2;
      count++;
    }
    //0を付け足す
    zero=0;//初期化
    while(count < 8){
      //スペース
      if(zero==4)
        putchar(' ');
      putchar('0');
      count++;
      zero++;
    }
//2進数のビット列を表示
    while(i > 0){
      //0が
      if(zero==4){
        putchar(' ');
        zero=0;
      }
      printf("%d", binary[--i]);
      if(i==4)
        putchar(' ');
    }
    printf("\n");
    k++;
  }

  return 0;
}
