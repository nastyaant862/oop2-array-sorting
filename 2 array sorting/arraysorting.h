#ifndef ARRAYSORTING_H
#define ARRAYSORTING_H

int randarray[10] = {};

int Result;

int Sum(int* array, int size);
void Print(int* array, int size);

void Invert(int* array, int size);
void Up(int* array, int size);
void Down(int* array, int size);
void (*Selected(int* array, int size))();

/*typedef int(*ActFunc(int*, int));
ActFunc actions[] = { Invert, Up, Down };*/

#endif