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

using namespace std;

//Arrays - DS
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



