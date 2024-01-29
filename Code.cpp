#include<iostream>
#include <string>
using namespace std;
int main() 
{
	
	string a;
	int i, j , n , len;
	
	cin >> n;
	cin.ignore();
	for (i=0;i<n;i++)
	{
		//cin.ignore();
		getline(cin, a);
		if (islower(a[0]))
			a[0] = toupper(a[0]);
		len = a.length();
		for (j = 1; j < len; j++)
		{
			if (a[j - 1] == ' ')
			{
				if (islower(a[j]))
					a[j] = toupper(a[j]);
			}
			else if (isupper(a[j]))
				a[j] = tolower(a[j]);
		}
		cout << a << endl;
	}



	return 0;
}