#include <stdio.h>
#include <iostream>
#include <locale.h>
using std::cin;

  int main(void){ 
	setlocale(LC_ALL,"Rus");
	int N;
	printf("������� �����\n" );
	cin >> N;
	printf("N == %d:�����: =%#x\n" ,N , N); // ����������������� ������������� �����	
  return 0;
  }