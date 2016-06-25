#include <stdio.h> 
#include <iostream>
using std::cout;
using std::cin;

   int main(int argc, char** argv) {	
	int A = 1;	
	unsigned int N = 1;	
	int res = A;
	cout << "Enter number \n";
	cin >> A ;
	cout << "Enter degree \n";
	cin >> N;	
	  for (int i = 1; i <= N; i++) 		
		res*= A;		
		cout<< A << " ^ "<< N << " = " << res ;	//вычисление степени N числа A  
	return res;
	}
		
	
 