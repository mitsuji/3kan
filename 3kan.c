#include <stdio.h>

void func1 () {
  int kan = 2;
  // Bad implementation
  printf("将棋の藤井%d冠が%d冠を達成しました\n", kan++, kan);
}

void func2 () {
  int kan = 2;
  // Bad implementation
  printf("将棋の藤井%d冠が%d冠を達成しました\n", kan, ++kan);
}

int main (int argc, char ** argv) {
  func1();
  func2();
}
