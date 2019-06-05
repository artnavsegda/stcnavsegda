#include <stdio.h>
#include <stdint.h>
#include "filter.h"

#define HOLDSIZE 256

struct holder_s
{
  int index;
  uint16_t cbuffer[HOLDSIZE];
};

typedef struct holder_s holder_t;

void filter_init(holder_t holder, uint16_t )
{
}

uint16_t filter(holder_t holder, uint16_t input)
{
}

int main(int argc, char *argv[])
{
  uint16_t sample;
  holder_t holder;
  filter_init(&holder, 0);
  scanf("%u", &sample);
  printf("%u\n", filter(&holder, sample));
}

