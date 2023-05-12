#include <iostream>
using namespace std;

int andi[144];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukan data andi: ";
		cin >> n;
		if ((n > 0) && (n <= 144))
			break;
		else
			cout << "\nData andi min 0 max 144.\n\n";
	}
	// Accept array elements
	cout << "\n--------------------\n";
	cout << " Masukan data andi \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> andi[i];
	}
}


void BinerySearch() {

	char ch;

	do
	{
		// Accept the number to be searched
		cout << "\nMasukan data andi untuk dicari: ";
		int item;
		cin >> item;

		int andi = 0;
		int granityo = n - 1;
		int mid; bool found = false;

		while (andi <= granityo)
		{
			mid = (andi + granityo) / 2;
			if (andi[mid] == item) {
				found = true;
				break;

			}
			else if (andi[mid] < item) {
				andi = mid + 1;
			}
			else {
				granityo = mid - 1;
			}
		}
		if (found)
		{
			cout << "\nitem<<" "found at postion" << (mid + 1) << endl;
		}
		else {
			cout << "\n" << item << " tidak ada data dalam andi\n";
		}
		cout << "\ncontinue search (y/n): ";
		cin >> ch;
	} while (ch == 'y' || ch == 'y');

}



int main()
{
	input();
	BinerySearch();
}