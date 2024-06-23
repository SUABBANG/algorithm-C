#include <stdio.h>
#include <conio.h> # Mac에서는 빌드 안됨

int main(void){
  char ch = 0;
  printf("아무 키나 누르면 다음으로 넘어갑니다.\n");

  ch = _getch();

  printf("임력한 키는 ");
  putchar(ch);

  return 0;
}