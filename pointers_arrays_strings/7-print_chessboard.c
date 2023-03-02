#include "main.h"

void
print_chessboard(char (*a)[8])
{
	int cont = 0;
	int contTable;
	int contNew;

	while (a[cont][8])
		cont++;
	for (contNew = 0; contNew < cont; contNew++)
	{
		for (contTable = 0; contTable < 8; contTable++)
			printf("%c", a[contNew][contTable]);
		(contTable == 8) ? printf("\n") : -1;
	}


}
