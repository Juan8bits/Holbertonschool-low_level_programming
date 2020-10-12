#include <stdio.h>
#include <stdlib.h>

/**
 * cambio - Function that divides the amount into number of coins.
 * @valor: Amount.
 * @cant: number of coins
 * Return: cant.
 */

int cambio(int valor, int cant)
{
	if (valor < 1)
	{
		return (cant);
	}
	else if (valor >= 25)
	{
		cant = cambio(valor - 25, cant + 1);
	}
	else if (valor >= 10)
	{
		cant = cambio(valor - 10, cant + 1);
	}
	else if (valor >= 5)
	{
		cant = cambio(valor - 5, cant + 1);
	}
	else if (valor >= 2)
	{
		cant = cambio(valor - 2, cant + 1);
	}
	else if (valor == 1)
	{
		cant = cambio(valor - 1, cant + 1);
	}
	return (cant);
}

/**
 * main - Program that prints the minimum number of coins to make
 * change for an amount. The coins only are 25,10,5,2 and 1 cent.
 * @argc: int number. size of argv.
 * @argv: char.
 * Return: Error & 1 if arcg != 2, else, value.
 */

int main(int argc, char *argv[])
{
	int cant;

	cant = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cant = atoi(argv[1]);
		if (cant < 0)
		{
			printf("0\n");
			return (1);
		}
		printf("%d\n", cambio(cant, 0));
	}
	return (0);
}
