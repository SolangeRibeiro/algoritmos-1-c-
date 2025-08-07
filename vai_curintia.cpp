#include<iostream>
#include<cstring>
using namespace std;
 
int main ()
{
	int n, i, k, cont = 0, idade[100]; //contadores sempre inicializa com 0(para limpar o lixo)
	string nome[100]; //nome e idade sao vetores então define uma quantidade
 
	cin >> n; //entrada de dados da quantidade de atletas
 
	for(i = 0; i < n; i++) // for para atribuir os nomes e as idades no vetor
	{
		cin.ignore();
		getline(cin, nome[i]); //nome cadastra em i(posição em que o vetor esta)
		cin >> idade[i];
 
		if(idade[i] >= 18) // if para validar se há atletas maiores de idade
		{
			cont++;
		}
	}
	if(cont > 0) //caso tenha algum atleta maior de idade
	{
		for(k = 0; k < n; k++) //for para varrer o vetor e imprimir os nomes dos atletas +18
		{
			if(idade[k] >= 18) 
			{
				cout << nome[k] << " " << idade[k] << endl;
			}
		} 
	}
	else
	{
		cout << "Nenhum jogador com 18 anos ou mais" << endl;
	}
 
 
	return 0;
}
