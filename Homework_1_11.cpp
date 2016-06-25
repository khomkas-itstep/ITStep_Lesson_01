#include <stdio.h>
#include <iostream>
#include <locale.h>
using std::cout;
using std::endl;
using std::cin;

  int main(void) {	
	int X;	
	setlocale(LC_ALL,"Rus");
	cout << "Введите год\n";
	cin >> X;	
	  if ( X % 4 == 0)
	    cout << X  << " " << " Високосный год " << endl;	
	  else 
	    cout << X  << " " << " Невисокосный год " << endl;		
    return 0;
  }