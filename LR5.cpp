
#include <iostream>
#include "disordered.h"
#include "Ordered.h"
#include "hash_table/HashTable.h"

int main()
{
	unordered<int> d = unordered<int>();
	Ordered<int,int> o = Ordered<int,int>();
	HashTable h = HashTable(5);

	h.insert(0,0);
	h.insert(1,1);
	h.insert(2,2);
	h.insert(3,3);
	h.insert(4,4);

	h.search(0);
	h.search(1);
	h.search(2);
	h.search(3);
	h.search(4);


	o.add(0, 0);
	o.add(4, 4);
	o.add(3, 3);
	o.add(1, 1);
	o.add(4, 6);
	o.add(2, 2);

	o.find(0);
	o.find(1);
	o.find(2);
	o.find(3);
	o.find(4);

	o.remove(4);
	o.remove(0);
	o.remove(2);

	o.cprint();

	d.add(0, 0);
	d.add(1, 1);
	d.add(2, 2);
	d.add(3, 3);
	d.add(4, 4);
	d.add(4, 6);


	d.remove(4);
	d.remove(0);
	d.remove(2);
	
	d.find(1);
	d.find(3);

	d[1];
	d[3];

	d.cprint();
}