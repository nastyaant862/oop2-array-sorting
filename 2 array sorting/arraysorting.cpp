#include "arraysorting.h"
#include <iostream>
using namespace std;


void Print(int *array, int size)
{
    for (int index = 0; index < size; ++index) {
        cout << array[index] << endl;
    }
}

int Sum(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

void (*Selected(int* array, int size))() {

    void (*actions[3])(int* array, int size) = { Invert, Up, Down };

    if (Sum(array, 10) == array[0]) {
        return actions[0];
        //return Invert;
    }
    if (Sum(array, 10) > array[0]) {
        return actions[1];
    }
    if (Sum(array, 10) < array[0]) {
        return actions[2];
    }
}

void Invert(int* array, int size) {
    for (int i = 0; i <= size / 2; i++) {
        swap(array[i], array[size - 1 - i]);
    }
    //return array[10];
}
void Up(int* array, int size) {
    for (int startInd = 0; startInd < size - 1; ++startInd)
    {
        int minInd = startInd;

        for (int currentInd = startInd + 1; currentInd < size; ++currentInd)
        {
            if (array[currentInd] < array[minInd])
                minInd = currentInd;
        }
        swap(array[startInd], array[minInd]);
    }
    //return array[10];
}
void Down(int* array, int size) {
    for (int startInd = 0; startInd < size - 1; ++startInd)
    {
        int maxInd = startInd;

        for (int currentInd = startInd + 1; currentInd < size; ++currentInd)
        {
            if (array[currentInd] > array[maxInd])
                maxInd = currentInd;
        }
        swap(array[startInd], array[maxInd]);
    }
    //return array[10];
}




