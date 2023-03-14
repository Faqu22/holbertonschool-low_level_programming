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
	if (qdl == NULL)
		return (NULL);
	while (i < height)
	{
		qdl[i] = (int *)malloc(sizeof(int) * width);
		if (qdl[i] != NULL)
		{
			continue;
		}
		else
		{
			for  (; i >= 0; i--)
			{
				free(qdl[i]);
			}
			free(qdl);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (a < width)
		{
			qdl[i][a] = 0;
			a++;
		}
		a = 0;
		i++;
	}
	return (qdl);
}
