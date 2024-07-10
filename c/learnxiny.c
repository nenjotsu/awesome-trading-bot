#include <stdio.h>
#include <stdlib.h>

int main() {
  // Note that there is no standard way to get the length of a dynamically allocated array in C. Because of this, if your arrays are going to be passed around your program a lot, you need another variable to keep track of the number of elements (size) of an array. See the functions section for more info.
  size_t size = 10;
  int *my_arr = calloc(size, sizeof(int));
  // Add an element to the array
  size++;
  my_arr = realloc(my_arr, sizeof(int) * size);
  if (my_arr == NULL) {
    //Remember to check for realloc failure!
    return;
  }
  my_arr[10] = 5;
}
