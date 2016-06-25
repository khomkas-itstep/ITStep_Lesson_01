#include <stdio.h> 
#include <iostream>
using namespace std;

  int main(int argc, char** argv){		
    int A = 9;			
      for ( int B = 1; B <= 9; B++ ){ 		
	    cout << B << '*' << A-- << '=' << B*A << endl;
	    }
    return 0;			
  }
		
	
 