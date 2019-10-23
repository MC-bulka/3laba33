#include <iostream>//подключаем бибиотеку
using namespace std;//стандартное пространство имен
int main () //начало программы
{
    float a,k,m;//объявление переменных
    cin>>a;//ввод a
    k=a*a;//a^2
    m=k*a;//a^3
    k=m*k;//a^5
    m=k*k;//a^10
    k=k*m;//a^15
    cout<<k<<endl;//вывод a^15
    return 0;//конец программы
}
