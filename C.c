
#include <stdio.h>
#include <stdlib.h>

void conversao_tempo();

    void converter_segundos(int total_segundos, int *dias, int *hora, int *minutos, int *segundos)
    {   
    *dias = total_segundos/84600;
    *hora = (total_segundos%84600)/3600;
    *minutos = (total_segundos%3600)/60;
    *segundos = total_segundos%60;
    }
    int main (){
        conversao_tempo();
    }
void conversao_tempo() {
    int total_segundos; // Variável para entrada do usuário
    int dia, horas, minutos, segundos;
        // Solicita entrada do usuário
    printf("Digite o total de segundos: ");
    if (scanf("%d", &total_segundos) != 1 || total_segundos < 0) {
        printf("Erro: insira um número inteiro positivo.\n");
        return;
    }
    // Realiza a conversão
    converter_segundos(total_segundos, &dia, &horas, &minutos, &segundos);
    // Exibe o resultado
    printf("Resultado: %d dias, %d horas, %d minutos, %d segundos\n", dia, horas, minutos, segundos);
}