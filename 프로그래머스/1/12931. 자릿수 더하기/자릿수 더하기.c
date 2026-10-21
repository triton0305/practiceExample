#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
  int dec = n;
  int div = 1;
  int answer = 0;
  while(n % div != n)
  {
      div *= 10;
      answer += (dec % div) / (div / 10);
      dec -= dec%div;
  }
  return answer;
}