#include <iostream>
#include "Header.h"
using std::cout;
using std::endl;
using std::ostream;


ostream& operator<<(ostream& out, const VBase& right)
{
	out << "Object(" << right.getStuff() << ")";
	return out;
}

int main()
{
	VDerived A(3);

	cout << A << endl;

	A.setStuff(4);

	cout << A << endl;

	return 0;
}