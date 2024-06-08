#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(string s, int k) {
	// Проверяем, если k не равно 0
	if (k > 0) {
		// Проверяем делимость строки на k
		if ((s.size() % k) != 0) {
			return false;
		}
		// Основные два цикла для сравнения строки и подстроки
		for (int i = 0; i < k; i += k) {
			char base = s[i];
			for (int j = 0; j < s.size(); j += k) {
				if (base != s[j]) {
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

int main() {

	std::string s = "abcabcabcabc";
	int k = 3;

	if (IsKPeriodic(s, k)) {
		std::cout << s << " является кратной числу " << k << std::endl;
	}
	else {
		std::cout << s << " не является кратной числу " << k << std::endl;
	}

	return 0;
}