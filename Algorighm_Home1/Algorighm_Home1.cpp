// Algorighm_Home1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h> 

int problem2A();
int problim2B();




int main()
{
	int x;
	x = problim2B();

	cout << x << endl;
	return 1;
}

int problem2A()
{
	int count = 0;
	int max, min;
	srand(time(NULL));

	int arr[1000] = { 0 };

	for (int j = 0; j < 100000; j++)
	{

	

	for (int i = 0; i < 1000; i++)
	{
		arr[i] = (rand()% 1000);
	}

		max = arr[0];
		min = arr[0];


	for (int i = 0; i < 1000; i++)
	{
		count++;
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else
			count++;
			if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	}

	count = count / 10000;

	return count;
}

int problim2B()
{
	int arr[1000] = { 0 };
	int max, min;
	int count = 0;
	int switchLoc;
	int temp;
	int tempRand;

	for (int i = 0; i < 1000; i++)
	{
		arr[i] = i;
	}

	for (int j = 0; j < 100000; j++)
	{

		max = min = arr[0];
		for (int i = 0; i < 1000; i++)
		{
			switchLoc = rand() % 1000;
			tempRand = rand() % (i+5)*(j+5);
			srand(i*j+i^2*tempRand);

			temp = arr[i];
			arr[i] = arr[switchLoc];
			arr[switchLoc] = temp;

		}

		for (int i = 0; i < 1000; i++)
		{
			count++;
			if (arr[i] > max)
			{
				max = arr[i];
			}
			else
				count++;
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}

	}

	count = count / 100000;

	return count;
}
