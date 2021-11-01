#pragma once
#include <vector>
#include <list>
#include <iostream>
using namespace std;

class hashset
{
private:
	int hash_func(int value);
	vector<list<int>> v;
public:
	hashset();
	bool insert(int value);
	bool find(int value);
	void erase(int value);

	friend ostream& operator<<(ostream& out, const hashset& set);
};

