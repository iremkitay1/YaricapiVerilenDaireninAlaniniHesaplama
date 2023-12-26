#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	float r, alan;
	cout << "Yarýçap bilgisini giriniz : ";
	cin >> r;
	alan = 3.14 * r * r;
	cout << "Alan : " << alan << endl;

	return 0;
}