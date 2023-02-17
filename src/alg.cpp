// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"



bool checkPrime(uint64_t value) {
  if (value <= 1)
    return false;
  for (int i = 2; i * i <= value; i++)
    if (value % i == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t value = 2;
  int count = 1;
  for (int i = 3; count < n; i++) {
    if (checkPrime(i)) {
      value = i;
      count++;
    }
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
    while (true) {
      value++;
      if (checkPrime(value))
        break;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summ = 0;
  for (int j = 2; j < hbound; j++) {
    if (checkPrime(j))
      summ += j;
  }
  return summ;
}
