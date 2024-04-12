#include <iostream>
using namespace std;
//Завдання 1. Написати програму, яка видаляє з двовимірного масиву, заповненого випадковими числами, рядки,  що містять нульові елементи.
void deleteRowsWithZero(int**& arr, int& rows, int cols);

//Завдання 2. Написати програму, яка поелементно підсу- мовує два динамічні двовимірні масиви з однаковим розміром,
//заповнені випадковими числами, і зберігає результат у третьому масиві.
//Розміри вихідних масивів задаються користувачем.
void allocateRowsTwoDynArr(int**& arr, int sizeRows);
void allocateCalsTwoDynArr(int** arr, int rows, int cols);
void initTwoDynArr(int** arr, int rows, int cols);
void printTwoDynArr(int** arr, int rows, int cols);
void sumArr(int** arr1, int** arr2, int** sumArr, int rows, int cols);
void deleteTwoDynArr(int** arr, int rows);
