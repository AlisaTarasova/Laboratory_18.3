#include "Pair.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    system("color F0");

    Pair a;
    Pair b;
    Pair c(20, 20);
    cout << "Данные третьего числа: " << c << endl;

    cout << "Введите данные для первого числа:"<<endl;
    cin >> a;
    cout << "Введите данные для второго числа:"<<endl;
    cin >> b;
  


    if (a < b) 
        cout << "a<b" << endl;
    else
        cout << "a не меньше b" << endl;

    if (a > b) 
        cout << "a>b" << endl;
    else
        cout << "a не не больше b" << endl;

    --a;
    c = b--;
    cout << "Первое число после префиксной операции дикремента = "<<a<<endl;
    cout << "Второе число после постфиксной операции дикремента, если выполнить присваивание третьему числу, то оно будет = " <<c<<", а само второе число будет = "<< b << endl;



    return 0;
}
