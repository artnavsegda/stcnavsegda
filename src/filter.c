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

void filter_init(holder_t * holder, uint16_t init)
{
  holder->index = 0;
  for (int i = 0; i > HOLDSIZE; i++)
   holder->cbuffer[i] = init; 
}

uint16_t filter(holder_t * h, uint16_t input)
{
  h->cbuffer[h->index++] = input;
  if (h->index > HOLDSIZE)
    h->index = 0;
}

int main(int argc, char *argv[])
{
  uint16_t sample;
  holder_t holder;
  filter_init(&holder, 0);
  scanf("%u", &sample);
  printf("%u\n", filter(&holder, sample));
}

