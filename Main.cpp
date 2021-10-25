#include <iostream>

using namespace std;
char op;

int main()
{
	float operation(float, float);
	float x;
	float y;

	cout << "entrez deux valeurs" << endl;
	cin >> x >> y;

	op = '+';
	cout << "Leur somme est      : " << operation(x, y) << '\n';
	op = '-';
	cout << "Leur difference est : " << operation(x, y) << '\n';
	op = '/';
	cout << "Leur produit est    : " << operation(x, y) << '\n';
	op = '*';
	cout << "Leur quotient est   : " << operation(x, y) << '\n';

	return 0;
}

float operation(float x1, float x2)
{
	float res;

	switch (op)
	{
	case '+': res = x1 + x2;
		break;
	case '-': res = x1 - x2;
		break;
	case '/': res = x1 / x2;
		break;
	case '*': res = x1 * x2;
		break;
	default: res = x1 + x2;
	}
	return res;
}