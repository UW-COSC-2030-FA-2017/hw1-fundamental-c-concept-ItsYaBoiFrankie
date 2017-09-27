//Frankie Galtieri
//Cosc II
//9-21-17
//HW pt.2

#include<iostream>
#include <cstdlib>

#include "Collection.h"
#include "Object.h"

//Returns true ONLY IF there are no objects in the collection
bool Collection::isEmpty(){
    if(Collection::objCount == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

//Removes all objects from the collection
void Collection::makeEmpty(){
    //Delete entire collection.
    delete[] collection;
    //remake empty collection.
    collection = new Object[2];
}


//inserts an object (x) into the collection
void Collection::insert(Object x)
{
    objCount++;
    //If I need more room, keep making some till I dont anymore.
    while(objCount > collection.size())
    {
        Object tmp[collection.size() + 1];
    }
    //Declared/Initialized outside of loop to be used as final spot in array to add new Object.
    int i = 0;
    for(i; i < collection.size(); i++)
    {
        //copies object into tmp
        tmp[i] = collection[i];
    }
    //To try to make the compiler happy.
    delete[] collection;
    collection = new Object[tmp.size()]
    collection = tmp;
    //Finally adds new object into array at the end.
    collection[i] = x;
}

//removes an Object (x) so long as the object exists.
void Collection::remove(Object x)
{
    //If we found the object in the array. If not, skip to the end of function.
    if(Collection::notContained(Object x) == false)
    {
        int i = 0;
        for(i; i < collection.size(); i++)
        {
            //if this object at this index matches the object we are looking for,
            //make spot NULL/0.
            if(collection[i] == x)
            {
                collection[i] = 0;
            }

            //If this spot in the array is NULL/0, replace it with the value in the
            //spot ahead of it and then change the spot ahead to NULL/0.
            if(collection[i] == 0)
            {
                collection[i] = collection[i + 1];
                collection[i + 1] = 0;
            }
        }

        //Now the loop has ended and the last spot in the array is NULL/0, decrease
        //our object count by one.
        objCount--;
        //To shrink our array, we copy it into a tmp array and re-create collection with one less size.
        while(objCount < collection.size())
        {
            Object tmp[collection.size() - 1];
        }
        for(i = 0; i > tmp.size(); i++)
        {
            //copies object into tmp
            tmp[i] = collection[i];
        }
        //To try to make the compiler happy.
        delete[] collection;
        collection = new Object[tmp.size()]
        collection = tmp;
    }
}

//removes random Object from collection.
void Collection::removeRandom()
{
    int rando = rand() % collection.size() + 1;
    collection[rando] = 0;
    for(i; i < collection.size(); i++)
        {
            //If this spot in the array is NULL/0, replace it with the value in the
            //spot ahead of it and then change the spot ahead to NULL/0.
            if(collection[i] == 0)
            {
                collection[i] = collection[i + 1];
                collection[i + 1] = 0;
            }
        }

        //Now the loop has ended and the last spot in the array is NULL/0, decrease
        //our object count by one.
        objCount--;
        //To shrink our array, we copy it into a tmp array and re-create collection with one less size.
        while(objCount < collection.size())
        {
            Object tmp[collection.size() - 1];
        }
        for(i = 0; i > tmp.size(); i++)
        {
            //copies object into tmp
            tmp[i] = collection[i];
        }
        //To try to make the compiler happy.
        delete[] collection;
        collection = new Object[tmp.size()]
        collection = tmp;
}

//returns true ONLY IF an Object equal to (x) is not present in the collection.
bool Collection::notContained(Object x)
{
    for (int i = 0; i < collection.size(); i++)
    {
        if(x == collection[i])
        {
            return false;
        }
    }
    return true;
}
