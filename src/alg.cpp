// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <math.h>


bool checkPrime(uint64_t value) {
  for (uint64_t i = 2; i < sqrt(value); i++)
    if (value%i == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0, value = 1;
  while (count < n){
    value++;
    if (checkPrime(value))
      count++;
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
    while (true){
      value++;
      if (checkPrime(value))
        break;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summ = 0;
  for (uint64_t j = 2; j < hbound; j++)
    if (checkPrime(j))
      summ += j;
  return summ;
}
