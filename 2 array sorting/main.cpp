#include "arraysorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(0));
    for (unsigned i = 0; i < 10; i++) {
        randarray[i] = 1+ rand() % 10; //заполняем массив рандомными числами 1...10
    }
    Print(randarray, 10);
    
    void(*Action)(int* array, int size);

    Action = Selected(randarray, 10);
    cout << Action << endl;
    Action(randarray, 10);

}