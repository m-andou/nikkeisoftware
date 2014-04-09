#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DATA_NUM 100

int insertSort(int data[], int length) {
  int pos, ins, tmp, n;
  n = 0;
  for (pos = 1; pos < length; pos++) {
    ins = pos;
    while (ins >= 1 && data[ins - 1] > data[ins]) {
      tmp = data[ins - 1];
      data[ins - 1] = data[ins];
      data[ins] = tmp;
      ins--;
      n++;
    }
  }
  return n;
}

void showArray(int data[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    printf("[%d]", data[i]);
  }
  printf("\n");
}

int main() {
  int data[DATA_NUM];
  int i, n;

  /* 0`99‚Ì—”‚ð”z—ñ‚ÉŠi”[‚·‚é */
  srand((unsigned int)time(NULL));
  for (i = 0; i < DATA_NUM; i++) {
    data[i] = rand() % DATA_NUM;
  }

  /* ”z—ñ‚ð‘}“üƒ\[ƒg‚·‚é */
  n = insertSort(data, DATA_NUM);

  /* Œ‹‰Ê‚ð•\Ž¦‚·‚é */
  showArray(data, DATA_NUM);

  /* ˆ—‰ñ”‚ð•\Ž¦‚·‚é */
  printf("ˆ—‰ñ” = %d‰ñ\n", n);
  return 0;
}
