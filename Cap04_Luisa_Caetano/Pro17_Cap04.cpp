/*
Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O 
programa deve mostrar uma mensagem de permissão de acesso ou não.
 */

#include <iostream>
#include <cstdlib>

using namespace std;
    
int main(int argc, char** argv) {
    int senha; 
    
    cout << "Insira a senha de acesso: "; cin >> senha; 
    
    //verificando a senha inserida
    if (senha == 4531) {
        cout << "\nACESSO LIBERADO!";
    } else {
        cout << "\nACESSO NEGADO!"; 
    }
    return 0;
}

