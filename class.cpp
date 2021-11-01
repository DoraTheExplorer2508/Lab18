#include "hashset.h"

int hashset::hash_func(int value)
{
	return value % v.size();
}

hashset::hashset()
{
	v.resize(10);
}

bool hashset::insert(int value)
{
	if (find(value)) {
		return false;
	}

	int key = hash_func(value);
	v[key].push_back(value);
	return true;
}

void hashset::erase(int value)
{
	int key = hash_func(value);
	list<int> &p = v[key];
	for (auto start = p.begin(); start != p.end(); start++) {
		if (*start == value) {
			p.erase(start);
			break;
		}
	}

}

bool hashset::find(int value)
{
	int key = hash_func(value);
	list<int> p = v[key];
	for (int k : p) {
		if (k == value) {
			return true;
		}
	}
	return false;
}

ostream& operator<<(ostream& out, const hashset& set)
{
	for (int i = 0; i < set.v.size(); i++) {
		for (int k : set.v[i]) {
			out << k << " ";
		}
	}
	out << endl;
	return out;
}
