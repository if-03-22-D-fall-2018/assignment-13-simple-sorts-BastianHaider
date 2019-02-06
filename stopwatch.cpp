/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

float startTime;
float stopTime;

void start_stopwatch()
{
  startTime=clock();
}
float elapsed_time()
{
  stopTime=clock();
}
void stop_stopwatch()
{
  if (stopTime<startTime)
  {
    return clock()-startTime;
  }
  return stopTime-startTime;
}
