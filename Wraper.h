#pragma once
#include "disordered.h"
#include "Ordered.h"
#include "hash_table/HashTable.h"

template <typename T>
class Wraper
{public:
	Wraper(int size) {
		hs = HashTable(size);
		un = unordered<T>();
		o = Ordered<int, T>();
	}

	void add(int key,T t) {
		hs.insert(key,t);
		un.add(key, t);
		o.add(key, t);
	}

	void remove(int key) {
		//hs.deleteItem(key);
		un.add(key);
		o.add(key);
	}

	void find(int key) {
		hs.search(key);
		un.find(key);
		return o.find(key);
	}
private:
	HashTable hs;
	unordered<T> un;
	Ordered<int, T> o;
};

