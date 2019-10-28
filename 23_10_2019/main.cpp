//  main.cpp
//  Pisano period
//
//  The sequence repeats after 0 1

using namespace std;

#include <iostream>
#include "fib.cpp"
#include "pis.cpp"

int main()
{
	cout << "<html>\n";
	cout << "\t<head>\n";
	cout << "\t\t<title>Pisano</title>\n";
	cout << "\t</head>\n";
	cout << "\t<body>\n";
	cout << "\t\t<table border=\"1\"\n";
	cout << "\t\t\t<thead>\n";
	cout << "\t\t\t\t<td>m</td><td colspan=\"20\">Pisano period</td><td>Quantity</td>\n";
	cout << "\t\t\t</thead>\n";

	for(int m = 2; m <= 1024; ++m)
	{
		pis(m);
	} 

	cout << "\t\t</table>\n";
	cout << "\t</body>\n";
	cout << "</html>";

	return 0;
}
