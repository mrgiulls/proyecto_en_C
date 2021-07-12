#include <stdio.h>
int main()
{
  int opcion;
  float agregar,retirar,saldo=3000;

  printf("\t*****************************************\n");
  printf("\t*Este es un simulador de tienda o cajero*\n");
  printf("\t*****************************************\n");
  printf("Selecciona una Opcion:\n");
  printf("\n0) Consultar saldo");
  printf("\n1) Depositar Dinero");
  printf("\n2) Retirar Dinero");
  printf("\n3) Salir del cajero");
  printf("\nOpcion Seleccionada:");
  scanf("%i",&opcion);

  switch(opcion)
    {
    case 0:
      printf("Su saldo actual es de: %f\n",saldo);
      break;
    case 1: printf("Cuanto dinero quiere depositar?\n");
      scanf("%f", &agregar);
      saldo += agregar;
      printf("Tu saldo actual es de %f\n",saldo);
      break;

    case 2: printf("Cuanto dinero quiere retirar?\n");
      scanf("%f", &retirar);
      if(retirar > saldo)
	{
	  printf("Tu saldo disponible solo es de %f\n",saldo);
	}else
	{
      saldo -= retirar;
      printf("Tu saldo actual es de %f\n",saldo);
      break;
	}
    case 3:printf("Gracias por usar el cajero\n Hasta pronto\n");
      break;
    }

  return (0);
}
