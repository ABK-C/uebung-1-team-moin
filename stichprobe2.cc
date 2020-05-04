#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main() {
ifstream fin1("datensumme.txt");
ifstream fin2("datensumme.txt");
ofstream mout("mittelwerte.txt");
ofstream vout("varianzen.txt");

double Gesamtmittelwert=0;
double Gesamtvarianz=0; 

for(int n=1; n<=234/9; ++n) {
double summand = 0;
double sum = 0;


  for(double m=1; m<=9; ++m) {
  double a_m;
  fin1 >> a_m;
  summand += a_m;

  }
 
double mittelwert = summand/9;
mout << "Mittelwert = " << mittelwert << endl;


for(double m=1; m<=9; ++m) {
  double a_m;
  fin2 >> a_m;
  sum += (a_m-mittelwert)*(a_m-mittelwert);

}

double varianz = sum/9;

vout << "Varianz = " << varianz << endl;


Gesamtmittelwert += (mittelwert*9)/234;
Gesamtvarianz += (varianz*9)/234;

}

mout << "\nGesamtmittelwert: " << Gesamtmittelwert;
vout << "\nGesamtvarianz: " << Gesamtvarianz;

fin1.close();
fin2.close();
mout.close();
vout.close();
}
