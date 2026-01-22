//link:https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Z
#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;   cin >> s;
	string w = "";
	int temp = n;
	for (int i = 0; i < n; i++) {
		if (temp % 2 == 0) {
			w = s[i] + w;
		}
		else w = w + s[i];
		temp--;
	}
	cout << w;
	}


