#include<iostream>
#include<cstring>
#include<iomanip>  //biblioteca para numeros decimais
using namespace std;

int main() {
    string nome;
    char tipo; 
    int mat;
    float media, n1, n2; //float para sair numero decimal
    
    cout << "Matricula:";
    cin >> mat;
    cin.ignore();
    cout << "Nome:";
    getline(cin, nome);  //entrando com o nome
    cout << "Tipo ('A' ou 'B'):";  
    cin >> tipo;  //entrando com o tipo
    cout << "Notas:";
    cin >> n1 >> n2;  //entrando com as notas
    
    media = (n1+n2)/2; //media aritmetica simples
    
    //saidas
    cout<<"Matricula: "<< mat << endl;
    cout << fixed << setprecision(1);
    cout<<"Média: "<< media << endl;
    
    return 0;
}
