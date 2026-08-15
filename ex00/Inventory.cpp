#include "Inventory.hpp"

void Inventory::remove(const std::string &item) {
	int n = 0;
		for (const std::string &i : m_list) {
			n++;
			if (i == item) {
				m_list.erase(m_list.begin() + n);
				m_count--;
			}
	}
}

bool Inventory::has(const std::string& item) const {
		for (const std::string &i : m_list) {
			if (i == item)
				return (1);
		}
		return (0);
}
