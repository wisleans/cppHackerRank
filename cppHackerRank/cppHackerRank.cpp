// cppHackerRank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <iomanip>

using namespace std;

//Arrays - DS
/*
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0;arr_i < n;arr_i++) {
		cin >> arr[arr_i];
	}
	
	vector<int> arr1 = arr;
	reverse(arr1.begin(), arr1.end());

	for (vector<int>::iterator it = arr1.begin(); it != arr1.end(); ++it)
		cout << *it << ' ';

	cout << endl;

	return 0;
}
*/

//DAY 1 - 30 Data Types
/*
int main()
{
	int i = 4;
	double d = 4.0;
	string s = "HackerRank";

	int _int;
	double _double;
	string _string;

	cin >> _int;
	cin >> _double;

	cin.ignore();
	getline(cin,_string);

	cout << i + _int << endl;
	cout << fixed << setprecision(1) << d + _double << endl;
	cout << s << _string << endl;

	return 0;
}
*/

//DAY 2 - 30 Operators
/*
int main()
{
	double mealCost;
	int tipPercent;
	int taxPercent;

	cin >> mealCost;
	cin >> tipPercent;
	cin >> taxPercent;
	
	double tip = mealCost * (tipPercent/100.0);
	double tax = mealCost * (taxPercent/100.0);
	double totalCost = mealCost + tip + tax;

	cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
	return 0;
}
*/

//DAY 3 - 30 Conditional Statments
/*
int main()
{
	int N;
	cin >> N;

	bool boo = N % 2 == 0;

	if(boo)
	{
		if(2 < N && N <= 5)
			cout << "Not Weird" << endl;
		else if(6 < N && N <= 20)
			cout << "Weird" << endl;
		else if(20 < N)
			cout << "Not Weird" << endl;
	}
	else
	{
		cout << "Weird" << endl;
	}

	system("pause");
	return 0;
}
*/