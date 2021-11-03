#include <iostream>

using namespace std;

int main() {
	int num[5][5],i,j,n,sum=0,sum1=0;
	cout << "Insira  o numero de linhas da coluna: \n";
	cin >> n;
	cout << "Insira  o numero de colunas da coluna: \n";
	cin >> n;
	cout << "Insira o numero de Elementos da Matriz: \n";
	for(i = 0;i < n ;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << "Insira o numero no bolso["<<i<<"] ["<<j<<"]";
			cin>> num[i][j];
		}
		cout << endl;
	}
	cout << "Matriz e ... "<< endl;
	for(i = 0;i < n ;i++)
	{
		for(j=0;j<n;j++) {
		cout <<num[i][j] << " ";
	}
	cout << endl;
}
    for(i=0;i<n;i++)
    {
    	for (j=0;j<n;j++)
    	{
    		if(i==j)
    		{
    			sum = sum+num[i] [j];
			}
			if(i+j == n-1)
			{
				sum1 = sum1 + num[i][j];
			}
		}
	}
	cout << "A diagonal principal e: " <<sum;
	cout << "A diagonal secundaria e: " << sum1;
    return 0;
}
