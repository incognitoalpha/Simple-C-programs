//Given a square matrix A or task is to find it's determinant

#include<stdio.h>
#include<conio.h>

	main()
	{
		int n; 
		printf("\n Enter the length of the square matrix A : ");
		scanf("%d",&n); //the square matrix A is of order nxn
		
		float A[n][n],d,r; //d will calculate determinant, r is a ratio which we will use later
		printf("\n Enter the values of A rowwise :\n");
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("\n A[%d][%d] : ",i+1,j+1); 
				scanf("%f",&A[i][j]); //taking values of the matrix A from User
			}
		}
		
		//making upper triangular matrix by gaussian elimination
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				r = A[j][i]/A[i][i];
				for(int k=i; k<n; k++)
				{
					A[j][k] = A[j][k] - A[i][k]*r;
				}
			}
		}
		
		d=1; //prequalifying the value of determinant with 1 
		
		//let's have a look at this triangularised matrix
		printf("\nThe triangularised matrix after gaussian elimination is:\n");
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("\t %.1f",A[i][j]);
			}
			printf("\n");
			d*= A[i][i]; //for a triangularised matrix it's determinant is the product of the diagonal elements
		}
		printf("\n The determinant of the matrix is : %.1f");
		getch();	
	}
