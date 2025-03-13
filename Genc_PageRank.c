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
  int *links;      
} webpage_s;

/*
  Function: print_vect
  Input: vect[N] (tableau de doubles)
  Precondition: vect est un tableau de taille N
  Output: Affichage des éléments du vecteur
  Postcondition: Le vecteur est affiché à l'écran
*/
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

/*
  Function: all_ones_vect
  Input: vect[N] (tableau de doubles)
  Precondition: vect est un tableau de taille N
  Output: vect rempli avec des 1
  Postcondition: Tous les éléments de vect sont égaux à 1
*/
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

/*
  Function: print_mat
  Input: mat[N][N] (matrice de doubles)
  Precondition: mat est une matrice carrée de taille N x N
  Output: Affichage des éléments de la matrice
  Postcondition: La matrice est affichée à l'écran
*/
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

/*
  Function: all_ones_mat
  Input: mat[N][N] (matrice de doubles)
  Precondition: mat est une matrice carrée de taille N x N
  Output: Remplissage de mat avec des 1
  Postcondition: Tous les éléments de mat sont égaux à 1
*/
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
  print_vect(res);
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
  if (nb_links > MAX_LINKS || nb_links < 0){
    printf("Erreur sur le nombre de liens\n");
    return NULL;
  }
  
  webpage_s *page = (webpage_s *)malloc(sizeof(webpage_s));
  if (page == NULL){
    printf("Erreur d'allocation\n");
    return NULL;
  }

  page->id = id;
  page->nb_links = nb_links;

  page->links = (int *)malloc(nb_links * sizeof(int));
  if (page->links == NULL) {
    printf("Erreur d'allocation pour links\n");
    free(page);
    return NULL;
  }
  
  for (int i = 0; i < nb_links; i++) {
    page->links[i] = links[i];
  }

  return page;
}


void init_trans_mat(double P[N][N], webpage_s *web_graph[N]) {
    for (int i = 0; i < N; i++) {
        int liens_sortants = web_graph[i]->nb_links;
        if (liens_sortants == 0) {
            for (int j = 0; j < N; j++) {
                P[i][j] = 1.0 / N;
            }
        } else {
            for (int j = 0; j < N; j++) {
                P[i][j] = 0.0;
            }
            for (int j = 0; j < liens_sortants; j++) {
                int target = web_graph[i]->links[j]; 
                if (target >= 0 && target < N) {
                    P[i][target] = 1.0 / liens_sortants;
                }
            }
        }
    }
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
  int wp0_links[3] = {1, 2, 3};
  int wp1_links[2] = {0, 4};
  int wp2_links[1] = {3};
  int wp3_links[4] = {0, 1, 2, 5};
  int wp4_links[2] = {0, 5};
  int wp5_links[3] = {1, 2, 4};
  webpage_s *wp0 = init_webpage(0, 3, wp0_links);  
  webpage_s *wp1 = init_webpage(1, 2, wp1_links);  
  webpage_s *wp2 = init_webpage(2, 1, wp2_links);  
  webpage_s *wp3 = init_webpage(3, 4, wp3_links);  
  webpage_s *wp4 = init_webpage(4, 2, wp4_links);  
  webpage_s *wp5 = init_webpage(5, 3, wp5_links);  

  /* Declaration of the web graph */
  webpage_s *web_graph[N] = {wp0,wp1,wp2,wp3,wp4,wp5}; /* to change */
  
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
