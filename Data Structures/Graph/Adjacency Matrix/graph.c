#include <stdio.h>

enum node { A, B, C, D, E, F };

#define n 6
int G[n][n];

void zeroFill(int g[n][n])
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			g[i][j] = 0;
		}
	}
}

void addEdge(int nodeA, int nodeB)
{
	G[nodeA][nodeB] = 1;
}

void show( char* name, int G[n][n] )
{
	int i, j;
	printf("Graf: %s\n", name);

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%i ", G[i][j]);
			if(j == n-1) printf("\n");
		}
	}
}

int main(void)
{
	zeroFill(G);

	addEdge(A, B);
	addEdge(B, C);
	addEdge(B, D);
	addEdge(C, C);
	addEdge(C, E);
	addEdge(D, E);
	addEdge(D, F);
	addEdge(E, F);

	show("G", G);
}
