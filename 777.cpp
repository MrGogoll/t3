//вывести все четные числа от a до b (включительно). Числа вводятся с консоли.
#include <iostream>
using namespace std;
int main()
{
	int a, b, i;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {

			cout << i << endl;

		}
	}
}
