#include <stdio.h> 
#include <iostream>
#include <locale.h>
using std::cout;
using std::cin;
#include <iomanip>

  int main(int argc, char** argv) {
  setlocale(LC_ALL,"Rus");
	int N;  
	cout << "¬ведите число : \n";
	cin >> N; 	  
	  while (N > 0) {
		int a = N % 2;			
	    cout << a << " "; //двоичное представление числа
		N = N / 2;
	  }	
  return 0;
 }