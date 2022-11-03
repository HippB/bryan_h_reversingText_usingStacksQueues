#ifndef FUNCTION_H
#define FUNCTION_H
#include <string>
#include <fstream>
#include "queue.h"
void printQueue(Queue q);//Used for printing out the data.

void outputFile(Queue &q); //Used to save our output in a new file
							// and let the user to name the file
void readAndReverse( Queue &q); //reads the inputted text file

void readAndReverse2( Queue &q); //reads the inputted text file

#endif
