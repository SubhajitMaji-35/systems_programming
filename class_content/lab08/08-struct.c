#include <stdio.h>

/**
 *  Write a C program to read two timestamps (hours, minutes, seconds),
 *  stores them in appropriate structures, and print the time interval between them
 *  in seconds. NOTE: Your program should use a function that takes two timestamps
 *  as arguments and returns the number of seconds between them.
 */

struct timestamp {
  unsigned int hour;
  unsigned int min;
  unsigned int sec;
};

typedef struct timestamp Timestamp;

int time_diff(struct timestamp x, struct timestamp y){

  return (x.sec-y.sec) + (x.min - y.min)*60 + (x.hour - y.hour)*3600;

}
int main(){

  // Timestamp t1 = {5, 20, 10};
 
  Timestamp t1;	

  t1.hour = 5;
  t1.min = 20;
  t1.sec = 10;
	

  struct timestamp t2 = {3, 20, 10};

  printf("Difference = %d\n", time_diff(t1, t2));

  return 0;
}
