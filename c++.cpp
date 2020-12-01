/**
 * @file c++.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <cmath>
#include <iostream>

#ifdef __unix__
#include <stdlib.h>
char get_input() {
    system("stty raw");
    char c = getchar();
    system("stty cooked");
    return c;
}
#endif
#ifdef _WIN32
#include <conio.h>
char get_input() { return getch(); }
#endif
// #ifdef _WIN64
// #include <conio.h>
// char get_input() { return getch(); }
// #endif

using namespace std;

template <typename T> void input(T &a, T &b) {
    cout << "\nInserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero:";
    cin >> b;
}

void addizione() {
    double a, b;
    input(a, b);
    cout << a << " + " << b << " = " << a + b << endl;
}

void sottrazione() {
    double a, b;
    input(a, b);
    cout << a << " - " << b << " = " << a - b << endl;
}

void moltiplicazione() {
    double a, b;
    input(a, b);
    cout << a << " * " << b << " = " << a * b << endl;
}

void divisione() {
    double a, b;
    input(a, b);
    cout << a << " / " << b << " = " << a / b << endl;
}

void potenza() {
    double a, b;
    input(a, b);
    cout << a << " ^ " << b << " = " << powl(a, b) << endl;
}

void radice() {
    double a;
    cout << "Inserisci il numero: ";
    cin >> a;
    cout << "Radice di " << a << " = " << sqrtl(a) << endl;
}

int main() {
    while (true) {
        cout << "Bella!\nInserisci un simbolo per utilizzare una "
                "funzione:\n\t1\tAddizione\n\t2\tSottrazione\n\t3\tMoltiplicazione\n\t4"
                "\tDivisione\n\t5\tPotenza\n\t6\tRadice\n\tAltro\tEsci\n";
        switch (get_input()) {
        case '1':
            addizione();
            break;
        case '2':
            sottrazione();
            break;
        case '3':
            moltiplicazione();
            break;
        case '4':
            moltiplicazione();
            break;
        case '5':
            potenza();
            break;
        case '6':
            radice();
            break;
        default:
            return 0;
            break;
        }
        get_input();
    }
    return 0;
}