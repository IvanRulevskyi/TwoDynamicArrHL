#include "Function.hpp"
//Завдання 1. Написати програму, яка видаляє з двовимірного масиву, заповненого випадковими числами, рядки,  що містять нульові елементи.
void deleteRowsWithZero(int**& arr, int& rows, int cols)
{
    int rowCount = 0;
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][0] != 0)
        {
            if (rowCount != i)
            {
                arr[rowCount] = arr[i];
            }
            rowCount++;
        }
        else
        {
            delete[] arr[i];
        }
    }
    rows = rowCount;
    for (int i = rows; i < rows; i++)
    {
        delete[] arr[i];
    }
}

//Завдання 2. Написати програму, яка поелементно підсу- мовує два динамічні двовимірні масиви з однаковим розміром,
//заповнені випадковими числами, і зберігає результат у третьому масиві.
//Розміри вихідних масивів задаються користувачем.
void allocateRowsTwoDynArr(int**& arr, int sizeRows)
{
    arr = new int*[sizeRows];
}

void allocateCalsTwoDynArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
}

void initTwoDynArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = i + j;
        }
    }
}

void printTwoDynArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sumArr(int** arr1, int** arr2, int** sumArr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void deleteTwoDynArr(int** arr, int rows)
{
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
