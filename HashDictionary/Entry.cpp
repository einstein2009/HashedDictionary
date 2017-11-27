#include "Entry.h"
//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

template<class KeyType, class ItemType>
void Entry<KeyType, ItemType>::setKey(const KeyType & searchKey)
{
	searchKey = searchKey;
}

template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry() : item(nullptr), searchKey(nullptr)
{
}

template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry(KeyType searchKey) : items(nullptr), searchKey(searchKey)
{
}

template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry(ItemType newEntry, KeyType searchKey) : 
	item(newEntry), searchKey(searchKey)
{
}

template<class KeyType, class ItemType>
ItemType Entry<KeyType, ItemType>::getItem() const
{
	return item;
}

template<class KeyType, class ItemType>
KeyType Entry<KeyType, ItemType>::getKey() const
{
	return searchKey;
}

template<class KeyType, class ItemType>
void Entry<KeyType, ItemType>::setItem(const ItemType & newEntry)
{
	item = newEntry;
}

template <class KeyType, class ItemType>
bool Entry<KeyType, ItemType>::operator==(const Entry<KeyType, ItemType>& rightHandItem) const
{
   return (searchKey == rightHandItem.getKey());
}  // end operator==

template<class KeyType, class ItemType>
bool Entry<KeyType, ItemType>::operator>(const Entry<KeyType, ItemType>& rightHandItem) const
{
	return (searchKey > rightHandItem.getKey());
}