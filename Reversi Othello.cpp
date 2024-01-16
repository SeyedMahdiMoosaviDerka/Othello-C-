#include<iostream>
using namespace std;




int main ()
{
	int sum = 0;
	int long faza [8][8];


	/* fill faza with codes: */
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
				if (faza [i][j] == 28 || faza [i][j] == 37 )
				{
					cout <<  " " <<  " \U0001F534 " << " " ;
				}

				else if(faza [i][j] == 29 || faza [i][j] == 36)
				{
					cout <<  " " << " \U0001F535 "  << " " ;
				}

				else if (faza [i][j] % 8 == 0)
				{
					cout << " " << " " << faza [i][j] << " " << " " << endl;
				}
				
				else{
					cout << " " << " " << faza [i][j] << " " << " ";	
				}
				
			}

			else if (faza [i][j]<10)
			{	

				if (faza [i][j] == 8)
				{
					cout << " " << " 0" << faza [i][j] << " " << " " << endl;
				}
				else{
					cout << " " <<  " 0" << faza [i][j] << " " <<  " ";
				}
				
			}
		}

		cout << endl;

		/* \U0001F534 */
	}


		int TargetBlue;
		string TargetConditions;

		while (true){

			cin >> TargetBlue ;

			for(int i = 0; i<8; i++)
			{
				for(int j = 0; j<8; j++)
				{
					if(faza [i][j]>= 10)
					{
						if (faza [i][j] == 28 || faza [i][j] == 37 )
						{
							cout <<  " " <<  " \U0001F534 " << " " ;
						}

						else if(faza [i][j] == 29 || faza [i][j] == 36)
						{
							cout <<  " " << " \U0001F535 "  << " " ;
						}

						else if (faza [i][j] % 8 == 0)
						{
							cout << " " << " " << faza [i][j] << " " << " " << endl;
						}
						
						else{
							cout << " " << " " << faza [i][j] << " " << " ";	
						}
						
					}

					else if (faza [i][j]<10)
					{	

						if (faza [i][j] == 8)
						{
							cout << " " << " 0" << faza [i][j] << " " << " " << endl;
						}
						else{
							cout << " " <<  " 0" << faza [i][j] << " " <<  " ";
						}
						
					}
				}

				cout << endl;

				/* \U0001F534 */
			}
			
		}
}