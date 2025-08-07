
#include <iostream>
#include <iomanip>
#include<cstring>

using namespace std;

int main()
{

	int n; //numero de alunos
	int i = 0; //variavel de controle
	string nm; //nome dos alunos
	float n1, n2, n3, n4, md, s; //notas n1 a n4, media e soma
	
	cout << fixed << setprecision(2); //para duas casas decimais
	
	cin >> n;
	do
	{
		cin.ignore();
		getline(cin, nm); //entrando com o nome do aluno
		//entrando com as notas
		cin >> n1 >> n2 >> n3 >> n4; // na entrada de exemplo as notas estão entrando uma na frente da outra, então pode fazer 1 cin so para entrar com todas as notas colocando espaço para digitar a proxima 
		md = (n1 + 2 * n2 + 3 * n3 + 4 * n4) / 10;
		cout << nm << ": " << md << endl;
		i++;
	}
	while(i < n);


	return 0;
}
