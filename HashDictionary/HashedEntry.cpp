#include "HashedEntry.h"

template<class KeyType, class ItemType>
HashedEntry<KeyType, ItemType>::HashedEntry() : nextPtr(nullptr)
{
}

template<class KeyType, class ItemType>
inline HashedEntry<KeyType, ItemType>::HashedEntry(ItemType newEntry, KeyType searchKey) :
	nextPtr(searchKey, newEntry)
{
}

template<class KeyType, class ItemType>
inline HashedEntry<KeyType, ItemType>::HashedEntry(ItemType newEntry, KeyType searchKey, HashedEntry<KeyType, ItemType>* nextEntryPtr)
{
}

template<class KeyType, class ItemType>
inline void HashedEntry<KeyType, ItemType>::setNext(HashedEntry<KeyType, ItemType>* nextEntryPtr)
{
	nextPtr = nextEntryPtr;
}

template<class KeyType, class ItemType>
inline HashedEntry<KeyType, ItemType>* HashedEntry<KeyType, ItemType>::getNext() const
{
	return nextPtr;
}