#include <stdio.h>
#include <iostream>
#include <locale.h>
using std::cout;
using std::endl;
using std::cin;

  int main(void) {	
	int X;	
	setlocale(LC_ALL,"Rus");
	cout << "������� ���\n";
	cin >> X;	
	  if ( X % 4 == 0)
	    cout << X  << " " << " ���������� ��� " << endl;	
	  else 
	    cout << X  << " " << " ������������ ��� " << endl;		
    return 0;
  }