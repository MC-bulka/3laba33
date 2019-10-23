#include <iostream>//подключаем бибиотеку
using namespace std;//стандартное пространство имен
int main () //начало программы
{
    float a,k;//объявление переменных
    cin>>a;//ввод a
    k=a*a;//a^2
    k=k*k;//a^4
    k=k*k;//a^8
    cout<<k;//вывод a^8
    return 0;//конец программы
}
