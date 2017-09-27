//Frankie Galtieri
//Cosc II
//9-21-17
//HW pt.2

//To whom it concerns:
//I started this part of the homework two weeks early but have been wrestling with the compilers
//from both Visual Studios and Code::Blocks since, which took up a majority of my time on this hw
//as well as affecting my labs too, making extremely little progress on each attempt,
//in tandem with my 4 day absence with ROTC. I wasn't able to get my program to compile despite
//making office hours with Mr. Rafer both days as well as receiving help through my classmates:
//Emily Lukshin, Chandler Haukap, and Maria Debroy. Once possible, I plan to meet with my prof
//to help diagnose why I have such trouble through these programs as I try to write my code.

//In all of my files are additional line comments to help explain each process I expect my
//functions to run and I hope that they may be enough to at least earn me points by showing
//you exactly what I expected my code to do, although I could never test it because of
//compiler upon compiler errors.

//Thank you.

#include <iostream>
#include "Collection.h"
#include "COLLECTION.CPP"
#include "OBJECT.H"

int main()
{
    Collection<Object> myCollection = new Collection();
    cout << "Array Size = " << myCollection.size() << endl;
    cout << "Testing isEmpty(): " << myCollection.isEmpty() << endl;
    cout << "creating 3 objects..." << endl;
    Objects X, Y, Z = new Objects;
    collection[0] = X;
    collection[1] = Y;
    collection[2] = Z;
    cout << "Testing isEmpty(): " << collection.isEmpty() << endl;
    cout << "Testing notContained(Object A): " << collection.notContained(Object A) << endl;
    cout << "Testing insert(Object A): " << collection.insert(Object A) << endl;
    cout << "Testing notContained(Object A): " << collection.notContained(Object A) << endl;
    cout << "New Array Size = " << collection.size() << endl;
    cout << "Testing remove(Object A): " << collection.remove(Object A) << endl;
    cout << "Testing notContained(Object A): " << collection.notContained(Object A) << endl;
    cout << "New Array Size: " << collection.size() << endl;
    cout << "Testing removeRandom: " << collection.removeRandom(); << endl;
    cout << "New Array Size = " << collection.size() << endl;
    cout << "Testing makeEmpty(): " << collection.makeEmpty() << endl;
    cout << "New Array Size = " << collection.size() << endl;
    cout << "End of Test."
}
