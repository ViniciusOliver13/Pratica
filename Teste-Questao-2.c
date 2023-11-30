# include <stdio.h>
int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ;
return 0;
}

/*É criado e inicializada uma matriz 3x3, depois na linha 9 é chamado uma função 'f' e utiliza-
se a passagem por Valor da matriz 'm' onde é criado uma cópia local da matriz do 'main'.
Assim, dentro da função 'f' é realizado uma série de multiliplicações, adições e subtrações
entre os números que compõem a matriz, o resultado é retornado para a variável 'de' e na linha 10
impresso o número -5 como saída na tela.    
*/

