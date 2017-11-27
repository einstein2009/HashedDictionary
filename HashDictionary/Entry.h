//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** A class of entry objects for an array-based implementation of the ADT dictionary.
    Listing 18-2.
 @file Entry.h */

#ifndef _ENTRY
#define _ENTRY

#include "DictionaryInterface.h"

template <class KeyType, class ItemType>
class Entry
{
private:
   ItemType item;
   KeyType searchKey;
   
protected:
   void setKey(const KeyType& SearchKey);
   
public:
   Entry();
   Entry(KeyType searchKey);
   Entry(ItemType newEntry, KeyType SearchKey);
   ItemType getItem() const;
   KeyType getKey() const;
   void setItem(const ItemType& newEntry);
   bool operator==(const Entry<KeyType, ItemType>& rightHandItem) const;
   bool operator>(const Entry<KeyType, ItemType>& rightHandItem) const;
}; // end Entry
#include "Entry.cpp"
#endif
