//Frankie Galtieri
//Cosc II
//9-21-17
//HW pt.2

#ifndef COLLECTION_H_INCLUDED
#define COLLECTION_H_INCLUDED

#include "OBJECT.H"

using namespace std;

//template <class Object>
class Collection
{
    public:
        //Keeps track of the amount of objects currently existing.
        int objCount = 0;

        //constructor
        Object();

        //destructor
        ~Collection();

        //Returns true ONLY IF there are no objects in the collection
        bool isEmpty();

        //Removes all objects from the collection
        void makeEmpty();

        //inserts an object (x) into the collection
        void insert(Object x);

        //removes an Object (x) so long as the object exists.
        void remove(Object x);

        //removes random Object from collection.
        void removeRandom();

        //returns true ONLT IF an Object equal to (x) is not present in the collection.
        bool notContained(Object x);

    private:
        Object collection[2];
};

#endif // COLLECTION_H_INCLUDED
