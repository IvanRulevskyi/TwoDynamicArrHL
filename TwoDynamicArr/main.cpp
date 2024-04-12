#include "Function.hpp"
int main()
{
    {
       //Завдання 1. Написати програму, яка видаляє з двовимірного масиву, заповненого випадковими числами, рядки,  що містять нульові елементи.
        
        int sizeArrRows = 3;
            int sizeArrCols = 4;
            int** arr;
            ::allocateRowsTwoDynArr(arr, sizeArrRows);
            ::allocateCalsTwoDynArr(arr, sizeArrRows, sizeArrCols);
            ::initTwoDynArr(arr, sizeArrRows, sizeArrCols);
            ::printTwoDynArr(arr, sizeArrRows, sizeArrCols);
            ::deleteRowsWithZero(arr, sizeArrRows, sizeArrCols);
            cout << "Після видалення рядків з нульовими елементами:" << endl;
            ::printTwoDynArr(arr, sizeArrRows, sizeArrCols);
            ::deleteTwoDynArr(arr, sizeArrRows);
    }
    {
        //Завдання 2. Написати програму, яка поелементно підсу- мовує два динамічні двовимірні масиви з однаковим розміром,
        //заповнені випадковими числами, і зберігає результат у третьому масиві.
        //Розміри вихідних масивів задаються користувачем.
        
        int sizeArrRows = 0;
        int sizeArrCols = 0;
        cout<<"Enter the number of rows in the array: ";
        cin>>sizeArrRows;
        cout<<"Enter the number of array columns: ";
        cin>>sizeArrCols;
        
        int** arr1;
        int** arr2;
        int** sumArr;
        
        ::allocateRowsTwoDynArr(arr1, sizeArrRows);
        ::allocateRowsTwoDynArr(arr2, sizeArrRows);
        ::allocateCalsTwoDynArr(arr1 ,sizeArrRows, sizeArrCols);
        ::allocateCalsTwoDynArr(arr2 ,sizeArrRows, sizeArrCols);
        ::initTwoDynArr(arr1 ,sizeArrRows, sizeArrCols);
        ::initTwoDynArr(arr2 ,sizeArrRows, sizeArrCols);
        ::printTwoDynArr(arr1 ,sizeArrRows, sizeArrCols);
        cout<<endl;
        ::printTwoDynArr(arr2 ,sizeArrRows, sizeArrCols);
        
        ::allocateRowsTwoDynArr(sumArr, sizeArrRows);
        ::allocateCalsTwoDynArr(sumArr ,sizeArrRows, sizeArrCols);
        ::sumArr(arr1, arr2, sumArr, sizeArrRows, sizeArrCols);
        cout<<endl;
        ::printTwoDynArr(sumArr ,sizeArrRows, sizeArrCols);
        ::deleteTwoDynArr(arr1, sizeArrRows);
        ::deleteTwoDynArr(arr2, sizeArrRows);
        ::deleteTwoDynArr(sumArr, sizeArrRows);
    }
    
    
}
