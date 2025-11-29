#include <iostream>
using namespace std;
int main()
{
	int i = 300;
	int j;
	int sum;
	cout << "Числа від 300 до 600, сума дільників яких кратна 10:\n";
	do {
		sum = 0;
		j = 1;
		do {
			if (i % j == 0)
				sum += j;
			j++;
		} while (j <= i / 2);
		if (sum % 10 == 0)
			cout << i << " ";
		i++;
	} while (i <= 600);
	cout << "\n";
	return 0;
}