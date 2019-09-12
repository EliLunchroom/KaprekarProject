#include<stdlib.h>
#include<stdio.h>
#include "kaprekarUtils.h"

int main(int argc, char **argv) {

int n = atoi(argv[1]);

  if(argc != 2) {
    printf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);

  } else if(isKaprekar(n)) {
    printf("%d is a Kaprekar Number!\n", n);
  } else {
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
