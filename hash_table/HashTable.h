#pragma once


#include <iostream>

struct DataItem {
private:
    int data;
    int key;

public:
    DataItem(int key, int data);

    int getData() const;

    void setData(int data);

    int getKey() const;

    void setKey(int key);
};

class HashTable {
    int SIZE;
    DataItem** table;

    int hashCode(int key);

public:
    HashTable(int SIZE);

    DataItem* search(int key);

    void insert(int key, int data);

    void deleteItem(int key);

    void display();
};

