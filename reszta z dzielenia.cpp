#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int d;
	cin >> d;
	while (d > 0) {
		float a, b;
		cin >> a;
		cin >> b;
		int r;
		if (a > 0) {
			r = (int) a % (int) b;
		} else {
			if (b > 0) {
				r = a - b * floor(a / b); //funkcja floor zaokragla w dol
			} else {
				r = a + b * floor(a / (-b));
			}
		}
		cout << r << "\n";
		d--;
	}
	return 0;
}

