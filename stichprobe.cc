#include<iostream>
#include<fstream>
using namespace std;

int main() {
ifstream fin("datensumme.txt");
double summand = 0;

for(double n=1; n<=234; ++n) {
  summand += n;
}
cout << summand/234 << endl;
}