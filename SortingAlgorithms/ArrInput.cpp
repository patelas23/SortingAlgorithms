//Simple algorithm for requesting integer array from user 
//
#include "ArrInput.h"
#include <iostream>

using namespace std;

int * ArrInput::InputArrayConsole()
{
	int n,i;
	cout << "Enter size of array";
	cin >> n;

	int* a = new int[n];

	cout << "Enter contents of array";
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	return a;
}