#include <iostream>

using namespace std;

int main() {
	int i;
	int n;
	cout << "ingrese numero a multiplicar" << endl;
	cin >> n;
	for (i=1;i<=10;i++) {
		cout << n << "x" << i << "=" << n*i << endl;
	}
	return 0;
}
