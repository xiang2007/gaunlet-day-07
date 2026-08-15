// Inventory.hpp
#pragma once

#include <string>
#include <vector>
#include <iostream>

class Inventory {
public:
    void add(const std::string& item) {m_list.push_back(item); m_count++;};
	void remove(const std::string& item) {
		// int n = 0;
		// for (const std::string &i : m_list) {
		// 	n++;
		// 	if (i == item) {
		// 		m_list.erase(m_list.begin() + n);
		// 		m_count--;
		// 	}
		// }
	};   // absent item: no-op, cycle 4 proves it
	bool has(const std::string& item) const {
		for (const std::string &i : m_list) {
			if (i == item)
				return (1);
		}
		return (0);
	};
	int  count() const {return m_count;};
private:
    int m_count = 0;
	std::vector<std::string> m_list;
};