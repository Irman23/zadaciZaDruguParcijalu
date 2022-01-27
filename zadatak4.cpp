#include<iostream>
using namespace std;

int binarni(int decimalni)
{
	if (decimalni == 0)
		return 0;
	else
		return (decimalni % 2) + 10 * binarni(decimalni / 2);
}
int main()
{
	int n;
	cin >> n;
	cout<<binarni(n);

	return 0;
}
