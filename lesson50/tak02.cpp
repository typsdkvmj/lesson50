#include <iostream>
#include "logic.h"

using namespace std;



int main() {

	int a, b,c;

	c = rand();

	cout << "input , b and c: ";
	cin >> a >> b>>c;

	cout <<  sum(a, b,c)+ sub(a, b,c) << endl;


	return 0;
}