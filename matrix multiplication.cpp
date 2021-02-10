#include<stdio.h>

	main()
	{
		int a1,a2,b1,b2; //matrix A is of order a1xa2 and B is of order b1xb2  
		
		printf("\n Enter the order of the first matrix A: \n"); //taking user defined values of order of A
		printf("\n rows in A: ");
		scanf("%d", &a1);
		printf("\n columns in A: ");
		scanf("%d", &a2);
		
		printf("\n Enter the order of the second matrix B: \n"); //taking user defined values of order of B
		printf("\n rows in B: ");
		scanf("%d", &b1);
		printf("\n columns in B: ");
		scanf("%d", &b2);
		
		float A[a1][a2], B[b1][b2], C[a1][b2]; //we are multiplying matrix A with matrix B and the resultant matrix is C
		
		if(a2!=b1)
			printf("\nMatrix Multiplication not possible!! "); //to multiply A with B, number of coulmns in A must be equal to numbers of rows in B
			
		else
		{
			printf("\n Enter the elements of matrix A rowwise : \n"); //taking values into matrix A
			for(int i=0; i<a1; i++)
			{
				for(int j=0; j<a2; j++)
				{
					printf("\n A[%d][%d] : ",i+1,j+1);
					scanf("%f",&A[i][j]);
				}
			}
			
			printf("\n Enter the elements of matrix B rowwise : \n"); //taking values into matrix B
			for(int i=0; i<b1; i++)
			{
				for(int j=0; j<b2; j++)
				{
					printf("\n B[%d][%d] : ",i+1,j+1);
					scanf("%f",&B[i][j]);
				}
			}
			
			printf("\n The resultant product matrix C=AB is of order %d X %d and C looks like: \n\n",a1,b2); //calculating product of A with B
			for(int i=0; i<a1; i++)
			{
				for(int j=0; j<b2; j++)
				{
					C[i][j] = 0;
					for(int k=0; k<a2; k++)
						C[i][j]+= A[i][k] * B[k][j];
						
					printf("\t %.1f",C[i][j]);
				}
				printf("\n");
			}
		}
	}
