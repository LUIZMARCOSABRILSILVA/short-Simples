 #include <stdio.h> // biblioteca

int main () { // inicio do codigo fonte
    int valores_positivos, i; // variaveis inteiras
    float soma, valor; // variaveis float ponto flutuante
    valores_positivos = 0; // inicializacao de variavel
    soma = 0; // inicializacao de variavel
    for (i=0; i<6; i++) { // for i recebe 0 i < que 6 i ++ lança os valores
        scanf("%f",&valor); // leio os valores com scanf em float
        if (valor > 0){ // if valor > maior que 0
        valores_positivos++; // valores positivos ++
        soma = soma + valor; // soma recebe soma + valor 
        }
    }       
    printf("%d valores positivos\n",valores_positivos); // imprima os valores positivos 
    return 0; // retorna ao menu main 
}
