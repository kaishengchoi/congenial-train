/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.hc
 * @brief Implementation file of week 1 programming assignment
 *
 * A simple application that performs statistical analytics on a dataset. This 
 * programs consists a couple of functions that can analyze an arrat of unsigned 
 * char data items anf report analytics on the maximum, minimun, mean, and median 
 * of dataset.
 *
 * @author KaiShengChoi (Derrick)
 * @date 11 March 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array, int length) {
  
  print_array(array, length);

}

void print_array(unsigned char* array, int length){
  
  for ( int i = 0 ; i < length ; i++ ) {
    printf("index %d : %d\t", i, array[i]);
    if ( (i+1)%8 == 0 )
      printf("\r\n");
  }

}

