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

/*� criado e inicializada uma matriz 3x3, depois na linha 9 � chamado uma fun��o 'f' e utiliza-
se a passagem por Valor da matriz 'm' onde � criado uma c�pia local da matriz do 'main'.
Assim, dentro da fun��o 'f' � realizado uma s�rie de multiliplica��es, adi��es e subtra��es
entre os n�meros que comp�em a matriz, o resultado � retornado para a vari�vel 'de' e na linha 10
impresso o n�mero -5 como sa�da na tela.    
*/

