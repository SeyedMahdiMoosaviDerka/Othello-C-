#include<iostream>
using namespace std;
int main ()
{
	int sum = 0;
	int long long faza [8][8];
	for(int i = 0; i<8; i++)
	{
		for(int j = 0; j<8; j++)
		{
			sum++;
			faza [i][j]= sum;
		}
	}
	for(int i = 0; i<8; i++)
	{
		for(int j = 0; j<8; j++)
		{
			if(faza [i][j]>= 10)
			{
				cout << " " << faza [i][j] << " ";
			}
			else if (faza [i][j]<10)
			{
				cout << " 0" << faza [i][j] << " ";
			}
		}
		cout << endl;
	}
}