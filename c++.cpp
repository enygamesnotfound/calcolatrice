/**
 * @file c++.cpp
 * @author Enea Romano (enea.romanno@gmail.com)
 * @brief programma che funga da calcolatrice per l'aiuto in calcoli, potenze e radici quadrate
 * @version 1.0
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

void radice() 
{
    int nr;
    cout << "inserisci il valore della variabile per estrarre la radice: ";
    cin >> nr;
    cout << "la radice di " << nr << " è " << sqrt(nr) << "\n";
}

void potenza()
{
    int n1p;
    int n2p;
    cout << "inserisci il valore della variabile: "
         << "\n";
    cin >> n1p;
    cout << "inserisci il valore della potenza: "
         << "\n";
    cin >> n2p;
    cout << "il risultato è: "
         << "\n";
    cout << pow(n1p, n2p);
}

void somma()
{
    int n1s;
    int n2s;
    cout << "inserisci il valore della prima variabile: "
         << "\n";
    cin >> n1s;
    cout << "inserisci il valore della seconda variabile: "
         << "\n";
    cin >> n2s;
    for (int i = 0; i == 10; i++)
    {
        system("cls");
        cout << "sto calcolando...";
    }
    cout << "il rusultato è";
    cout << n1s + n2s << "\n";
}

void differenza()
{
    int n1r;
    int n2r;
    cout << "inserisci il valore della prima variabile: "
         << "\n";
    cin >> n1r;
    cout << "inserisci il valore della seconda variabile: "
         << "\n";
    cin >> n2r;
    for (int i = 0; i == 10; i++)
    {
        system("cls");
        cout << "sto calcolando...";
    }
    cout << "il risultato è";
    cout << n1r - n2r << "\n";
}

void fattore()
{
    int n1f;
    int n2f;
    cout << "inserisci il valore della prima variabile: "
         << "\n";
    cin >> n1f;
    cout << "inserisci il valore della seconda variabile: "
         << "\n";
    cin >> n2f;
    for (int i = 0; i == 10; i++)
    {
        system("cls");
        cout << "sto calcolando...";
    }
    cout << "il risultato è";
    cout << n1f * n2f << "\n";
}

void intero()
{
    int n1q;
    int n2q;
    cout << "inserisci il valore della prima variabile: "
         << "\n";
    cin >> n1q;
    cout << "inserisci il valore della seconda variabile: "
         << "\n";
    cin >> n2q;
    int risultato = n1q / n2q;
    for (int i = 0; i == 10; i++)
    {
        system("cls");
        cout << "sto calcolando...";
    }
    if (risultato == 0)
    {
        cout << "il quoto è " << n1q / n2q << "\n";
    }
    else if (risultato != 0)
    {
        cout << "il quoziente è " << n1q / n2q << "\n";
    }
}

void resto()
{
    int n1o;
    int n2o;
    cout << "inserisci il valore della prima variabile: "
         << "\n";
    cin >> n1o;
    cout << "inserisci il valore della seconda variabile: "
         << "\n";
    cin >> n2o;
    int risultato2 = n1o % n2o;
    for (int i = 0; i == 10; i++)
    {
        system("cls");
        cout << "sto calcolando...";
    }
    if (risultato2 == 0)
    {
        cout << "il quoto è " << risultato2 << "\n";
    }
    else if (risultato2 != 0)
    {
        cout << "il quoziente è " << risultato2 << "\n";
    }
}

int main()
{
    cout << "benvenuti in questa calcolatrice\n per iniziare digitare senza premere invio uno dei seguenti tasti: " << "\n";
    cout << "+ ---> per avere la somma di due numeri" << "\n";
    cout << "- ---> per avere la differenza tra due numeri" << "\n";
    cout << "* ---> per avere il prodotto di due numeri" << "\n";
    cout << "/ ---> per avere il quoto/quoziente di due numeri(divisione senza resto)" << "\n";
    cout << "% --- > per avere il resto di due numeri(divisione con resto)" << "\n";
    cout << "r ---> per avere la radice quadrata di un numero" << "\n";
    cout << "p ---> per avere la potenza di un numero" << "\n";
    cout << "e ---> per uscire dal programma" << "\n";
    cout << "detto questo divertiti (°^°)" << "\n";
    while (true)
    {
        if (_kbhit())
        {
            char tasto = _getch();
            if (_getch() == 43)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                somma();
                return main();
            }
            else if (_getch() == 45)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                differenza();
                return main();
            }
            else if (_getch() == 42)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                fattore();
                return main();
            }
            else if (_getch() == 47)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                intero();
                return main();
            }
            else if (_getch() == 37)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                resto();
                return main();
            }
            else if (_getch() == 114)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                radice();
                return main();
            }
            else if (_getch() == 112)
            {
                cout << "(" << tasto << ")"
                     << "\n";
                system("cls");
                potenza();
                return main();
            }
            if (_getch() == 101)
            {
                system("cls");
                cout << "grazie per aver usato questo programma"
                     << "\n\n\n\n\n";
                return 0;
            }
        }
    }
}