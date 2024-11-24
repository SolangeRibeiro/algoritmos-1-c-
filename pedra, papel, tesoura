#include <iostream>
#include<cstring>
using namespace std;

int main() {
    int t, i; // número de rodadas
    
    cin >> t;

    for (i = 0; i < t; i++) {
        string jogadorA, jogadorB; //variavel para os jogadores
        
        cin >> jogadorA >> jogadorB; // ler as jogadas dos dois jogadores

        // Lógica para decidir o vencedor
        if (jogadorA == jogadorB) 
        {
            cout << "Empate" << endl;
        } 
        else if ((jogadorA == "pedra" && jogadorB == "tesoura") || (jogadorA == "tesoura" && jogadorB == "papel") || (jogadorA == "papel" && jogadorB == "pedra")) {
            cout << "Jogador A" << endl;
        } 
        else 
            cout << "Jogador B" << endl;
    }

    return 0;
}

