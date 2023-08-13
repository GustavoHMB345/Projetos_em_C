#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//int main(void) {
  //"Mostrar a hora do atual do sistema"//
  //time_t currentTime;
  //struct tm *timeinfo;

  //currentTime = time(NULL);
  //timeinfo = localtime(&currentTime);
  //printf("Hora atual: %02d:%02d:%02d\n\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);}


int main() {
  
  int hora_1, hora_2, minuto_1, minuto_2, result_1,result_2;

printf("\n Hora 1: ");
scanf("%d", &hora_1);

printf("\n Minuto 1: ");
scanf("%d", &minuto_1);

printf("\n Hora 2: ");
scanf("%d", &hora_2);

printf("\n Minuto 2:");
scanf("%d", &minuto_2);

result_1 = (hora_1 + hora_2)%60;
result_2 = minuto_1 + minuto_2;
  if (result_2 > 60) {
  result_1 = result_1 + (result_2/60);
    if( result_2%60 > 0);
    result_2 = (result_2%60);
    }

printf("A soma dos tempos é: %d", result_1+result_2);

return 0;
  }
//Caucular a soma de dois tempos registrados em horas e minutos//




