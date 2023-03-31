// Módulo principal (main.cpp)
#include <iostream>
#include "calculadora.h"
using namespace std;
int main() {
   int num1, num2;
   cout << "Digite o primeiro número: ";
   cin >> num1;
   cout << "Digite o segundo número: ";
   cin >> num2;
   cout << "Soma: " << soma(num1, num2) << endl;
   cout << "Subtração: " << subtracao(num1, num2) << endl;
   cout << "Multiplicação: " << multiplicacao(num1, num2) << endl;
   cout << "Divisão: " << divisao(num1, num2) << endl;
   return 0;  }
