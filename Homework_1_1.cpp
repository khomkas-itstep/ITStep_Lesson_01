#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <locale.h>

  int main() {  
  setlocale(LC_ALL,"Rus");  
  int number = 0;	
	printf( "введите целое число: \n" );
	scanf("%d", &number);
	printf("обратное: \n");
	  while (number > 0 ) {	  
		printf ("%d", number % 10 );
		number/=10;
	  }	
  return 0;  
 }