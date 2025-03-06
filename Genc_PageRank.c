#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

/* constants */
#define N 6
#define MAX_LINKS 100


typedef struct {
  int id;                    
  int nb_links;              
  int links[MAX_LINKS];      
} webpage_s;


void print_vect(double vect[N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    printf("%f \n", vect[i]);
  }
  return;
}

void test_print_vect(){
  /* write your tests here */
  double vect1[N] = {1, 2, 3, 4, 5, 6};
  print_vect(vect1);
  return;
}

void all_ones_vect(double vect[N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    vect[i] = 1;
    printf("%f \n", vect[i]);
  }
  return;
}

void test_all_ones_vect(){
  /* write your tests here */
  double vect1[N] = {1, 2, 3, 4, 5, 6};
  all_ones_vect(vect1);
  return;
}

void print_mat(double mat[N][N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      printf("%f ", mat[i][j]);
    }
    printf("\n");
  }
  return;
}

void test_print_mat(){
  /* write your tests here */
  double mat1[N][N] = {{1, 2, 3, 4, 5, 6},
                        {7, 8, 9, 10, 11, 12},
                        {13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24},
                        {25, 26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35, 36}};
  print_mat(mat1);
  return;
}

void all_ones_mat(double mat[N][N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      mat[i][j] = 1;
      printf("%f ", mat[i][j]);
    }
    printf("\n");
  }
}

void test_all_ones_mat(){
  double mat1[N][N] = {{1, 2, 3, 4, 5, 6},
                        {7, 8, 9, 10, 11, 12},
                        {13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24},
                        {25, 26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35, 36}};
  all_ones_mat(mat1);
  return;
}

void add_mat(double mat1[N][N], double mat2[N][N], double res[N][N]){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      res[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  print_mat(res);
  return;
}

void test_add_mat(){
  /* write your tests here */
  double mat1[N][N] = {{1, 2, 3, 4, 5, 6},
                        {7, 8, 9, 10, 11, 12},
                        {13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24},
                        {25, 26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35, 36}};
  double mat2[N][N] = {{1, 2, 3, 4, 5, 6},
                        {7, 8, 9, 10, 11, 12},
                        {13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24},
                        {25, 26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35, 36}};
  double res[N][N];
  add_mat(mat1, mat2, res);                   
  return;
}

void scalar_mult_vect(double s, double vect[N], double res[N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    res[i] = s * vect[i];
    printf("%f \n", res[i]);
  }
  return;
}

void test_scalar_mult_vect(){
  /* write your tests here */
  double vect1[N] = {1, 2, 3, 4, 5, 6};
  double res[N];
  scalar_mult_vect(2, vect1, res);
  return;
}

void scalar_mult_mat(double s, double mat[N][N], double res[N][N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      res[i][j] = s * mat[i][j];
    }
  }
  print_mat(res);
  return;
}

void test_scalar_mult_mat(){
  /* write your tests here */
  double mat1[N][N] = {{1, 2, 3, 4, 5, 6},
                        {7, 8, 9, 10, 11, 12},
                        {13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24},
                        {25, 26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35, 36}};
  double res[N][N];
  scalar_mult_mat(2, mat1, res);
  return;
}

void mat_vect_lmult(double mat[N][N], double vect[N], double res[N]){
  /* body of the function */
  for (int i = 0; i < N; i++){
    res[i] = 0;
    for (int j = 0; j < N; j++){
      res[i] += mat[i][j] * vect[j];
    }
  }
  print_mat(res);
  return;
}

void test_mat_vect_lmult(){
  /* write your tests here */
  double mat1[N][N] = {{1, 2, 3, 4, 5, 6},
                        {7, 8, 9, 10, 11, 12},
                        {13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24},
                        {25, 26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35, 36}};
  double vect1[N] = {1, 2, 3, 4, 5, 6};
  double res[N];
  mat_vect_lmult(mat1, vect1, res);                      
  return;
}

webpage_s *init_webpage(int id, int nb_links, int *links) {
}

void init_trans_mat(double P[N][N], webpage_s *web_graph[N]){
  /* body of the function */
  return;
}

void adj_trans_mat(double alpha, double P[N][N], double M[N][N]){
  /* body of the function */
  return;
}

void init_rank_vect(double R[N]){
  /* body of the function */
  return;
}

void update_pagerank_it(double M[N][N], double R[N], int nb_iter, double Rf[N]){
  /* body of the function */
  return;
}

int update_pagerank_asy(double M[N][N], double R[N], double eps, double Rf[N]){
  /* body of the function */
  return -1; /* to change */
}

int main(int argc, char **argv){
  printf("PageRank Algorithm.\n");

  /* Auxiliary test functions */
  test_print_vect();
  printf("\n");
  test_all_ones_vect();
  printf("\n");
  test_print_mat();  
  printf("\n");
  test_all_ones_mat();
  printf("\n");
  test_add_mat();
  printf("\n");
  test_scalar_mult_vect();
  printf("\n");
  test_scalar_mult_mat();
  printf("\n");
  test_mat_vect_lmult();
  printf("\n");

  /* Web graph example */
  /* Declaration of webpages */

  /* Declaration of the web graph */
  webpage_s *web_graph[N] = {}; /* to change */
  
  /* PageRank algorithm */
  /* Variables */
  double P[N][N];
  double M[N][N];
  double alpha = 0.85;
  double R_it[N];
  double pagerank_it[N];
  double R_asy[N];
  double pagerank_asy[N];

  /* Transition matrix */
  printf("Computing transition matrix\n");
  init_trans_mat(P, web_graph);
  print_mat(P);
  adj_trans_mat(alpha, P, M);
  print_mat(M);

  /* Rank vector */
  int nb_iter = 20;

  printf("Computing Rank vector (1)\n");
  init_rank_vect(R_it);
  update_pagerank_it(M, R_it, nb_iter, pagerank_it);
  printf("After %d iterations :\n",nb_iter);
  print_vect(pagerank_it);

  printf("Computing Rank vector (2)\n");
  init_rank_vect(R_asy);
  nb_iter = update_pagerank_asy(M, R_asy, 1e-12, pagerank_asy);
  printf("After %d iterations :\n",nb_iter);
  print_vect(pagerank_asy);
  
  return 0;
}
