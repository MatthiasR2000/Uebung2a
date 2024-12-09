#include <iostream>
using namespace std;

void geradeZahlen(int number);
int summeGeradeZahlen(int number);
void benutzerAbfrage();

int main() {
    benutzerAbfrage(); 
    return 0;
}

void geradeZahlen(int number) {
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}

int summeGeradeZahlen(int number) {
    int summe = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            summe += i;
        }
    }
    return summe;
}

void benutzerAbfrage() {
    int eingabe, number;
    while (true) {
        cout << "1. Gerade Zahlen bis n"
            << "\n2. Summe gerader Zahlen bis n" << endl;
        cout << "Ihre Eingabe wenn sie aufhören wollen drücken sie 0: ";
        cin >> eingabe;

        if (eingabe == 1) {
            cout << "Geben Sie eine Nummer an: ";
            cin >> number;
            geradeZahlen(number);
        }
        else if (eingabe == 2) {
            cout << "Geben Sie eine Nummer an: ";
            cin >> number;
            int summe = summeGeradeZahlen(number);
            cout << "Die Summe der geraden Zahlen bis " << number << " ist: " << summe << endl;
        }
        else if (eingabe == 0) {
            break;
        }
        else {
            cout << "Falsche Eingabe" << endl;
        }
    }

}