#include <stdio.h>
#include <iostream>
#include <locale.h>
using std::cin;

  int main(void){ 
	setlocale(LC_ALL,"Rus");
	int N;
	printf("ВВедите число\n" );
	cin >> N;
	printf("N == %d:Вывод: =%#x\n" ,N , N); // шестнадцатиричное представление числа	
  return 0;
  }