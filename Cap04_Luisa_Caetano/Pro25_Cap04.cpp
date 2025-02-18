/*
Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))
> = 2.400 500,00
1.800 2.400 400,00
1.200 1.800 300,00
600 1.200 200,00
< 600 100,00
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float horasextras, horasfaltas, premio, horas; 
    
    cout << "Insira a quantidade de horas extras: "; cin >> horasextras; 
    cout << "Insira a quantidade de horas faltosas: "; cin >> horasfaltas; 
    
    
    horas = (horasextras  * 60) - ((2/3) * (horasfaltas * 60));
    //360 
    if (horas >= 2400) {
        premio = 500; 
        cout << "\nSeu prêmio é de R$" << premio; 
    } else if (horas > 1800 && horas < 2400) {
        premio = 400; 
        cout << "\nSeu prêmio é de R$" << premio; 
    } else if (horas >= 1200 && horas < 1800) {
        premio = 300; 
        cout << "\nSeu prêmio é de R$" << premio; 
    } else if (horas >= 600 && horas < 1200) {
        premio = 200; 
        cout << "\nSeu prêmio é de R$" << premio; 
    } else {
        premio = 100;
        cout << "\nSeu prêmio é de R$" << premio; 
    }
    
    return 0;
}
