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

void bubble_sort(int small_array[], int length)
{
  int last_unsorted_element=length-1;
  bool is_swapped;
  int temp=0;
  do
  {
    is_swapped=false;
    for (int i = 0; i < last_unsorted_element; i++) {
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
  int temp=0;
  int j=0;
  for (int i= 1; i < length; i++)
  {
    temp=small_array[i];
    j=i-1;
    while (j <=0 && temp < small_array[j])
    {
      small_array[j+1]=small_array[i];
      i--;
    }
    small_array[j+1]=temp;
  }
}
void init_random(int small_array[], int length)
{
  srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
  {
    small_array[i] = random();
  }		
}
