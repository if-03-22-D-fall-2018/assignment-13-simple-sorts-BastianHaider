/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <time.h>
#include <stdlib.h>

void init_random(int *array, unsigned long length)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
  
}
void bubble_sort(int small_array[], int length)
{
  int last_unsorted_element=length-1;
  bool is_swapped;
  int temp=0;
  do
  {
    is_swapped=false;
    for (int i = 0; i < last_unsorted_element; i++)
    {
      if (small_array[i+1] < small_array[i])
      {
        temp=small_array[i];
        small_array[i]=small_array[i+1];
        small_array[i+1]=temp;
        is_swapped=true;
      }
    }
    last_unsorted_element--;
  } while(is_swapped);
}
void insertion_sort(int small_array[], int length)
{
  int toSwap;
	int toCompare;

	for (int i = 0; i < length; i++) {
		toSwap = small_array[i];
		toCompare = i - 1;
		while (toCompare >= 0 && small_array[toCompare] > toSwap) {
			small_array[toCompare + 1] = small_array[toCompare];
			toCompare--;
		}
	}
	small_array[toCompare + 1] = toSwap;
}
