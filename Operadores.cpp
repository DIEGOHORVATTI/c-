/*
simbolo   	Descrição
::	        Resolução de escopo
++          Incremento
--          Decremento
()          Parênteses (chamada de função)
[]          Elemento de arranjo
.           Seleção de elemento por identificador
->          Seleção de elemento por ponteiro

! ~   NOT   Não lógico e complemento
(type)      Conversão de tipo de dado ,casting
*           Desreferência
&           Referência (endereço de elemento)
sizeof      tamanho de elemento
new[]       Alocação dinâmica de memória
delete[]    Desalocação dinâmica de memória

.* ->*	    Ponteiro para membro
+           Adição
-           subtração
*           Multiplicação
/           Divisão
%           Módulo (resto)

<<   SHL    Deslocamento de bits à esquerda
>>   SHR    Deslocamento de bits à direita
<           Menor que”
<=          Menor ou igual que
>           Maior que
>=          Maior ou igual que

==          Igual a
!=	        Diferente de
&	   AND    E para bits
^	   XOR    Ou exclusivo para bits
|	   OR     Ou para bits
&&	        E lógico    
||	        Ou lógico
x ? y : z	  Condição ternária	direita para esquerda
=           Atribuição
+=          Atribuição por adição
-=          Atribuição por subtração
*=          Atribuição por multiplicação
/=          Atribuição por divisão
%=          Atribuição por módulo (resto)
<<=         Atribuição por deslocalmento de bits a esquerda
>>=         Atribuição por deslocalmento de bits a direita
&=          Atribuição por operação lógica E
|=          Atribuição por operação lógica OU
^=          Atribuição por operação lógica OU exclusivo
throw	      Lançamento de exceção
,	          Vírgula
*/

// inversão de valores em c++
#include <iostream>
using namespace std;

int main(void){

  int num = 10;
  // num = num * -1;
  num =- num;
  cout << num;

  return(0);
}