#include <iostream>
#include<cmath>
using namespace std;

void hanoi(int n, int a, int b, int c);



int main() {
	int n = 0;
	cin >> n;
	cout << pow(2, n) - 1 << endl;
	hanoi(n, 1, 2, 3);

}
void  hanoi(int n, int a, int b, int c) {
	if (n < 1)
		return;
	else {
		hanoi(n - 1, a, c, b);
		cout << a << " " << c << endl;
		hanoi(n - 1, b, a, c);
	}
}
