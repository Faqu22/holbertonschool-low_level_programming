#include "main.h"
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int i = 0;
	int a = 0;
	int **qdl;

	if (width < 1 || height < 1)
		return (NULL);
	qdl = (int **)malloc(height * sizeof(int *));
	while (i < height)
	{
		qdl[i] = (int *)malloc(sizeof(int) * width);
		i++;
	}
	i = 0;
	while (qdl[i])
	{
		while (qdl[i][a])
		{
			qdl[i][a] = 0;
			a++;
			if (qdl[i] == NULL)
				free(qdl[i]);
			free(qdl);
		}
		a = 0;
		i++;
	}
	return (qdl);
}
