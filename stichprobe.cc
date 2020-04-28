#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main() {
ifstream fin("datensumme.txt");
double summand = 0;

for(double n=1; n<=234; ++n) {
  summand += n;
}
double mittelwert = summand/234;

cout << "Mittelwert = " << mittelwert << endl;


double sum = 0;

for(double n=1; n<=234; ++n) {
  sum += (n-mittelwert)*(n-mittelwert);
}

double varianz = sum/234;

cout << "Varianz = " << varianz << endl;


double sigma = sqrt(varianz);

cout << "Standardabweichung = " << sigma << endl;
}