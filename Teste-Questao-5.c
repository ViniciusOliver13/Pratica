#include <stdio.h>
int main ( ) {
int i ;
for ( i = 1 ; i <= 100 ; i *= 100) {
    if ( i ==30 ) {
        break ;
    }
else{
    printf ("%2d\n" ,2* i ) ;
    }
}
printf ("Fim do laco !\n") ;

return 0;
}
/*Na 1� vez que � feito o la�o de repeti��o 'for' o conte�do impresso na tela � o valor 2.
2� vez da repeti��o � impresso na linha de baixo o valor 200.
3� Ao sair do la�o � impresso a mensagem "Fim do laco".
*/