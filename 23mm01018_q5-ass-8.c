#include <stdio.h>
#define N 3
#define M 3
// Function to print the matrix
void displayMatrix(int matrix[][M]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n"); 
  }
  
} 
// Function to right rotate the matrix n times
void rotateMatrix(int matrix[][M], int k) {
  // temporary array of size M
  int temp[M];
 
  // within the size of matrix
  k = k % M;
 
  for (int i = 0; i < N; i++) {
 
    // copy first M-k elements to temporary array
    for (int t = 0; t < M - k; t++)
      temp[t] = matrix[i][t];
 
    // copy the elements from k to end to starting
    for (int j = M - k; j < M; j++)
      matrix[i][j - M + k] = matrix[i][j];
 
    // copy elements from temporary array to end
    for (int j = k; j < M; j++)
      matrix[i][j] = temp[j - k];
  }
}

int main() {
    int matrix[N][M] = {{12, 23, 34},
                     {45, 56, 67}, 
                     {78, 89, 91}};
  int k = 2;
 
  // rotate matrix by k
  rotateMatrix(matrix, k);
 
  // display rotated matrix
  displayMatrix(matrix);


    return 0;
}