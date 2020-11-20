#include <stdio.h>
#include <string.h>

void swap(char * a1, char * a2, size_t count);

int main(void) {
  char name1[] = "George";
  char name2[] = "Fillip";
  size_t name1_l = strlen(name1);
  size_t name2_l = strlen(name2);

  printf("%s\n", name1);
  printf("%s\n", name2);

  swap(name1, name2, name1_l < name2_l ? name1_l : name2_l);

  printf("%s\n", name1);
  printf("%s\n", name2);

  return 0;
}

/*
 *  In-place swap using XOR
 */
void swap(char * a1, char * a2, size_t count) {
  for (size_t e_ = 0; e_ < count; ++e_) {
    *a1 ^= *a2;
    *a2 ^= *a1;
    *a1++ ^= *a2++;
  }
}
