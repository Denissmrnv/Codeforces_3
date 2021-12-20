#include <iostream>;
#include <string>;

using namespace std;

int main() { 
	string str;
	int n, count, rezult = 0;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		count = 0;
		getline(cin, str);
		for (int i = 0; i < str.length(); i++)
			if (str[i] == '1')
				count++;
		if (count > 1)
			rezult++;
	}

	cout << rezult << endl;
	return 0;
}