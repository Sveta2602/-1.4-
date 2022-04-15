#include <iostream>
#include <iomanip>
#include <string>
#include "MyString1.h"
#include <sstream>




using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	
	MyString1 g;
	
	
	g.Read();
	
	g.Compare();
	
	g.Assign();
	 g.Konkaten();

	 g.NumertoString(66);
	 g.StringtoNumer();
	 
	 
	 
	
	// g.toString();
	return 0;
}
