#include <stdio.h>

int main(){

float seg, seg1, ter, ter1, quar, quar1, quin, quin1, sext, sext1, saldo, valorec, valorgast;

printf("Recebido Segunda:\n");
scanf("%f", &seg);
printf("Gasto Segunda:\n");
scanf("%f", &seg1);
printf("Recebido Terca:\n");
scanf("%f", &ter);
printf("Gasto Terca:\n");
scanf("%f", &ter1);
printf("Recebido Quarta:\n");
scanf("%f", &quar);
printf("Gasto Quarta:\n");
scanf("%f", &quar1);
printf("Recebido Quinta:\n");
scanf("%f", &quin);
printf("Gasto Quinta:\n");
scanf("%f", &quin1);
printf("Recebido Sexta:\n");
scanf("%f", &sext);
printf("Gasto Sexta:\n");
scanf("%f", &sext1);

valorec = seg + ter + quar + quin + sext;
valorgast = seg1 + ter1 + quar1 + quin1 + sext1;
saldo = valorec - valorgast;

if (saldo > 2000){ 
printf("Valor total recebido: %f\n", valorec);
printf("Valor total pago:%f\n", valorgast);
printf("Saldo Atual:%f\n", saldo);}

else if (saldo < 500) {
printf("Valor total recebido:%f\n", valorec);
printf("Valor total pago:%f\n", valorgast);
printf("Saldo Atual:%f\n", saldo); }


}

