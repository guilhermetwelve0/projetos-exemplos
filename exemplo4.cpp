#include <iostream>

using namespace std;

int main() {
	int num[20][20],i,j,n,sum[10] = {0}, sum1[10] = {0};
	cout << "Coloque o numero de Linhas e Colunas: \n";
	cin >> n;
	cout << "Coloque o numero maximo de matrizes: \n"<< endl;
	cin >> j;
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		cout << "Coloque o numero no pacote["<<i<<"]["<<j<<"]";
		cin >> num[i][j];
		}	
		cout << endl;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			sum[i] = sum[i] + num[i][j];
			sum1[i] = sum[i] + num[j][i];
		}
	}
	cout << "Matriz e ..." << endl;
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout <<num[i][j] << "  ";
		}
		cout <<sum[i] << "   "<< endl;
	}
	for(i=0;i<n;i++){
		cout <<sum1[i]<< " ";
	}
	return 0;
}
