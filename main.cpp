#include <iostream>
using namespace std;

int main(){
    //Буду использовать формулу n=A/Q1.
    //Инициализирую переменные
    float Q1;
    float Q2;
    float A;
    float otvet;


    string question;
    cout << "Made by WapWapG\n";
    cout << "Это программа для вычисления КПД теплового двигателя\n";
    cout << "Вам известно A?: ";
    cin >> question;

    //Проверка на известность A
    if (question == "Нет" || question == "нет"){
        //Получение значений для вычисления A
        cout << "Введите значение Q1: ";
        cin >> Q1;
        cout << "Введите Q2: ";
        cin >> Q2;
        //Расчет A
        A = Q1 - Q2;
        cout << "A = " << A;
        cout << "\n";
    }

    cout << "Введите A: ";
    cin >> A;
    cout << "Введите Q1: " << endl;
    cin >> Q1;

    //Вычисление по формуле
    otvet = A/Q1*100;
    cout << otvet;
    cout << "\n";
}
