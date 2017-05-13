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
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <filesystem>


using namespace std;



//DAY 1 - 30 Data Types
#pragma region DAY 1
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
#pragma endregion DAY 1

//DAY 2 - 30 Operators
#pragma region DAY 2
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
#pragma endregion DAY 2

//DAY 3 - 30 Conditional Statments
#pragma region DAY 3
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
#pragma endregion DAY 3

#pragma region DAY 4
/*
int main() {
	int t;
	int age;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> age;
		Person p(age);
		p.amIOld();
		for (int j = 0; j < 3; j++) {
			p.yearPasses();
		}
		p.amIOld();

		cout << '\n';
	}

	return 0;
}
*/
#pragma endregion DAY 4

#pragma region DAY 5
/*
int main() {
	int n;
	cin >> n;

	for(int i=1;i<=10;i++)
	{
		cout << n << " x " << i << " = " << n * i << endl;
	}
	return 0;
}
*/
#pragma endregion DAY 5

#pragma region DAY 6
/*
int main() {
	int cases;
	cin >> cases; 
	cin.clear(); 
	cin.ignore();
	for (int i = 0; i < cases; i++)
	{
		string line, e, o;
		getline(cin, line);
		for (int i = 0; i < line.size(); i++)
		{
			if(i % 2 == 0)
			e += line[i];

			if(i % 2 > 0)
			o += line[i];
		}
		cout << e << " " << o << endl;
	}
	system("pause");
	return 0;
}
*/
#pragma endregion DAY 6

//Arrays - DS
#pragma region DAY 7 Arrays
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
#pragma endregion DAY 7 Arrays

#pragma region DAY 8
/* NOT WORKING
int main() {
	map<string, int> phonebook;
	map<int, string> input;
	int count, number;string name,inputs;

	cin >> count;

	for(int i =0;i<count;++i)
	{
		cin >> name;
		cin >> number;
		phonebook[name] = number;
	}

	for(int i=0;i<count;++i)
	{
		cin >> inputs;
		input[i] = inputs;
	}

	for (int i = 0;i<count;++i)
	{
		if(phonebook[input[i]] == 0)
			cout << "Not found" << endl;
		else
			cout << input[i]<<"="<< phonebook[input[i]] << endl;
	}

	return 0;
}
*/
/*
int main()
{
	map<string, int> phonebook;
	map<string, int>::iterator it;
	string name, key;
	int phoneNumber, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> phoneNumber;
		phonebook.insert(make_pair(name, phoneNumber));
	}

	while (cin >> key) {
		it = phonebook.find(key);

		if (it != phonebook.end()) {
			cout << it->first << "=" << it->second << endl;
		}
		else {
			cout << "Not found\n";
		}
	}

	return 0;
}
*/
#pragma endregion DAY 8

#pragma region DAY 9 
/*
int factorial(int input)
{
	int output = 1;

	for (int i = input;i>0;i--)
	{
		if (i >0)
		{
			output = output * (i);
		}

	}
	return output;
}

int main()
{
	int input=0;
	//cin >> input;
	
	//tests
	int test1 = factorial(3);
	cout << test1 << endl;
	int test2 = factorial(4);
	cout << test2 << endl;
	int test3 = factorial(5);
	cout << test3 << endl;

	system("pause");
	return 0;
}
*/
#pragma endregion DAY 9 Factorial

#pragma region DAY 10 Binary

int main() {
	int n;
	cin >> n;
	return 0;
}

#pragma endregion DAY 10