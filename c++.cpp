#include <iostream>
#include <iomanip>
#include <locale.h>
#include<stdlib.h>
#include <math.h>

using namespace std;

float euclidiana (int tam, float *num1, float *num2){

float soma = 0;

int i = 0;

for(i = 0; i<= tam-1 ; i++){
    soma+= pow(num1[i] - num2[i], 2);
}

return sqrt(soma);
}

int main(){


setlocale(LC_ALL,"Portuguese");
system("Color D");

int tam, i = 0;

cout << "Distancia eu eucliana entre dois vetores."

cout << "Digite o tamanho dos vetores:";
cin >> tam;

float *v1 = 0;
float *v2 = 0;

v1 = (float*)malloc(tam * sizeof(float));
v2 = (float*)malloc(tam * sizeof(float));

while(i <= tam-1){
    cout << "\nDigite o " << i+1 << "º elemento referente ao primeiro vetor: ";
    cin >>  v1[i];
    i++;
}

i = 0;

while(i <= tam-1){
    cout << "\n\nDigite o " << i+1 << "º elemento referente ao segundo vetor: ";
    cin >>  v2[i];
    i++;
}

cout << "O resultado é: " << euclidiana(tam, v1, v2);


return 0;
}
