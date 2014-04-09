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

  /* 0�`99�̗�����z��Ɋi�[���� */
  srand((unsigned int)time(NULL));
  for (i = 0; i < DATA_NUM; i++) {
    data[i] = rand() % DATA_NUM;
  }

  /* �z���}���\�[�g���� */
  n = insertSort(data, DATA_NUM);

  /* ���ʂ�\������ */
  showArray(data, DATA_NUM);

  /* �����񐔂�\������ */
  printf("������ = %d��\n", n);
  return 0;
}


// 3��ڂ̃u�����`�e�X�g