#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	for (char a = 'a'; a <= 'z'; a++)
	{
		int cnt = 0;
		for (auto i : str)
			if (i == a)
				cnt++;
		cout << cnt << " ";
	}
}