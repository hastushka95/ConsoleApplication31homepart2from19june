// ConsoleApplication31homepart2from19june.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include<time.h>
//homework 2 paper 19 june
int main()
{//homework 1
   /* int const n = 10, a = 10, b = 20;
    int arr[n];
    int min, max;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = a + rand() % (b - a);
        cout << arr[i] << " ";
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    cout << "min: " << min << "max: " << max;
    return 0;*/

    //homework 2


   /*int const n = 10;
    int arr[n];
    int a, b, summa, level;
    srand(time(NULL));
    cout << "start numbers\n";
    cin >> a;
    cout << " end\n";
    cin >> b;
    cout << "level\n";
    cin >> level;
    for (int i = 0; i < n; i++) {
        arr[i] = a + rand() % (b - a);
        cout << arr[i] << " ";
    }
    summa = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i]<level){
            summa = summa + arr[i];
        }
    }
    cout << "summa\n" << summa;
    return 0;*/

    //homework 3
    int const n = 12;
    int profit[n];
    int start, max, min, end;
    for (int i = 1; i < n; i++) {
        cout << "enter profit.\n." << i + 1<<"\n";
        cin>> profit[i];
    }
    cout << "enter start ..\n";
    cin >> start;
    cout << " enter end..\n";
    cin >> end;
    min = start - 1;
    max = start - 1;
    for (int i = start; i <= end - 1; i++) {
        if (profit[i] > profit[max]) {
            max = i;
        }
        if (profit[i] < profit[min]) {
            min = i;
        }
    }
    cout << "min \n" << min + 1;
    cout << " max \n" << max + 1;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
