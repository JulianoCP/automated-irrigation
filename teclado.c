// Projeto: Acionamento de teclas no teclado matricial 4x4
// Autor: Baú da Eletrônica (www.baudaeletronica.com.br)

/*
teclado         arduino
linha1 preto    6
coluna5 azul    5
coluna6 verde   4
coluna7 amarelo 3
*/
 
//incluindo a biblioteca do teclado matricial
#include <Keypad.h>
 
const byte linhas = 4; //4 linhas
const byte colunas = 4; //4 colunas
 
//teclado matricial
char matrizteclado[linhas][colunas] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte pinoslinhas[linhas] = {6}; //pinos utilizados nas linhas
byte pinoscolunas[colunas] = {5,4,3}; //pinos utilizados nas colunas
 
//inicializando o teclado
Keypad teclado = Keypad( makeKeymap(matrizteclado), pinoslinhas, pinoscolunas, linhas, colunas );
 
void setup() {
  Serial.begin(9600);
  Serial.println("Pressione uma tecla");
}
 
void loop() {
  char apertatecla = teclado.getKey(); // verifica se alguma tecla foi pressionada
 
  if (apertatecla) {
    Serial.print("Tecla Pressionada: ");
    Serial.println(apertatecla);
 
 
 
  }
}
