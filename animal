#include <iostream>
#include<cstring>
using namespace std;

int main() {
    
    int i = 0; // variável de controle
    string pal[3]; // vetor que armazena as palavras
    
    do {
        cin >> pal[i]; // entrada das palavras
        i++;
        
    } while(i < 3);

    // Verificação das condições para identificar o animal
    if (pal[0] == "vertebrado") // a primeira palavra deve ser comparada com o índice 0 (VETOR SEMPRE INICIA NA POSÇÃO 0)
    {   
        if (pal[1] == "ave") // a segunda palavra com o índice 1
        { 
            if (pal[2] == "carnivoro") // a terceira palavra com o índice 2
            { 
                cout << "aguia" << endl;
            } 
            else if (pal[2] == "onivoro") 
            {
                cout << "pomba" << endl;
            }
            else 
                cout << "não encontrado" << endl;
            
        }
        else if (pal[1] == "mamifero") 
        {
            if (pal[2] == "onivoro") 
            {
                cout << "homem" << endl;
            } 
            else if (pal[2] == "herbivoro")
            {
                cout << "vaca" << endl;
            }
             else 
                cout << "não encontrado" << endl;
            
        }
    } 
    else if (pal[0] == "invertebrado") 
    {
        if (pal[1] == "inseto") 
        {
            if (pal[2] == "hematofago") 
            {
                cout << "pulga" << endl;
            } 
            else if (pal[2] == "herbivoro") 
            {
                cout << "lagarta" << endl;
            }
             else 
                cout << "não encontrado" << endl;
            
        } 
        else if (pal[1] == "anelideo") 
        {
            if (pal[2] == "hematofago") 
            {
                cout << "sanguessuga" << endl;
            } 
            else if (pal[2] == "onivoro") 
            {
                cout << "minhoca" << endl;
            }
             else 
                cout << "não encontrado" << endl;
            
        }
         else 
                cout << "não encontrado" << endl;  // validação pra caso a palavra digitada nao seja nenhuma das pedidas
            
    }

    return 0;
}
