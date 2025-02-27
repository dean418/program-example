#include <stdio.h>

void print_another_msg() {
  printf("something else");
}

void print_msg() {
  printf("something else");
}

int main() {
  printf("hello world!\n");
  printf("bcdefgh");
  print_msg();
  print_another_msg();
  return 0;
}
