#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int matrixLand(int n, int m, int A[n][m]) {
    int *left = ( int *)malloc(sizeof(int)*m);
     int *right =( int *)malloc( sizeof(int)*m);
   
   for( int i=0;i<n ;i++)
   {
   	   left[0] = A[i][0] ; 
   	  for( int j=1 ;j<m ; j++)
   	    {
   	      if( left[j-1]  > 0)
			  left[j] =  A[i][j] + left[j-1];
		   else
			  left[j] = A[i][j];	
		}
   	

   	 right[m-1] = A[i][m-1] ;
   	  for( int j=m-2 ;j >-1 ; j--)
   	    {
   	       if( right[j+1]  > 0)
			  right[j] = A[i][j] + right[j+1];
		   else
			  right[j] = A[i][j];	
		}
   	
       if(right[1] > 0)
   	      A[i][0] = right[1] + A[i][0] ;
   	   if(left[m-2] >0 )
   	      A[i][m-1] = left[m-2] + A[i][m-1] ;
       for( int j=1 ;j<m-1 ;j++)
       {
           if( left[j-1] > 0)  
              A[i][j] += left[j-1];
           if( right[j+1] > 0)
               A[i][j] +=  right[j+1];
       }
       if(i >0)
       for( int j=0 ;j<m ;j++)
       {
             A[i][j] += A[i-1][j] ;
          
       }
       
   } 
   
    int max =0;
     for( int j=0; j<m ; j++)
     { if( A[n-1][j] > max)
         max = A[n-1][j] ;
     }
    return max ;
}
int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int A[n][m];
    for (int A_i = 0; A_i < n; A_i++) {
       for (int A_j = 0; A_j < m; A_j++) {
      
          scanf("%i",&A[A_i][A_j]);
       }
    }
    int result = matrixLand(n, m, A);
    printf("%d\n", result);
    return 0;
}
