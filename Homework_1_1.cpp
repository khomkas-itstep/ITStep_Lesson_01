#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <locale.h>

  int main() {  
  setlocale(LC_ALL,"Rus");  
  int number = 0;	
	printf( "������� ����� �����: \n" );
	scanf("%d", &number);
	printf("��������: \n");
	  while (number > 0 ) {	  
		printf ("%d", number % 10 );
		number/=10;
	  }	
  return 0;  
 }