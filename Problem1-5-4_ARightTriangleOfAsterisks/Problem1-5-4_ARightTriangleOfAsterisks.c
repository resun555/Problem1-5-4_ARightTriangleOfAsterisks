// Problem1-5-4_ARightTriangleOfAsterisks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	int length;
	scanf("%d", &length);
	if (length < 0)
	{
		printf("Invalid input");
		exit(EOF);
	}
	int width;
	scanf("%d", &width);
	if (width < 0)
	{
		printf("Invalid input");
		exit(EOF);
	}
	size_t count = 0;
	size_t step = 1;
	if (length <= width)
	{
		for (step = 1; count < width * 2; step++)
		{
			count = 0;
			for (size_t i = 0; i < length && count < width; i++, count += step)
			{
			}
			if (count == width)
			{
				break;
			}
		}
		if (count > width)
		{
			exit(EOF);
		}
		else
		{
			printf("1. Upper left; 2. Upper right; 3. Lower left; 4. Lower right;\n");
			int option;
			scanf("%d", &option);
			switch (option)
			{
			case 1:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < (width - i - 1) / step + 1; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			case 2:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < i / step; j++)
					{
						printf(" ");
					}
					for (size_t j = 0; j < (width - i - 1) / step + 1; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			case 3:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < i / step + 1; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			case 4:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < (width - i - 1) / step; j++)
					{
						printf(" ");
					}
					for (size_t j = 0; j < i / step + 1; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			default:
				exit(EOF);
				break;
			}
		}
	}
	else
	{
		for (step = 2; count < length * 2; step++)
		{
			count = 0;
			for (size_t i = 0; i < width && count < length; i++, count += step)
			{
			}
			if (count == length)
			{
				break;
			}
		}
		if (count > length)
		{
			exit(EOF);
		}
		else
		{
			printf("1. Upper left; 2. Upper right; 3. Lower left; 4. Lower right;\n");
			int option;
			scanf("%d", &option);
			switch (option)
			{
			case 1:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < (width - i) * step; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			case 2:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < i * step; j++)
					{
						printf(" ");
					}
					for (size_t j = 0; j < (width - i) * step; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			case 3:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < (i + 1) * step; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			case 4:
				for (size_t i = 0; i < width; i++)
				{
					for (size_t j = 0; j < (width - i - 1) * step; j++)
					{
						printf(" ");
					}
					for (size_t j = 0; j < (i + 1) * step; j++)
					{
						printf("*");
					}
					if (i < width - 1)
					{
						printf("\n");
					}
				}
				break;
			default:
				exit(EOF);
				break;
			}
		}
	}
    return 0;
}

