#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>


#define NCOLS 100
#define NROWS 100 //δοκιμή 100,1000,10000,10000 γραμμές

void get_walltime(double *wct) {
  struct timeval tp;
  gettimeofday(&tp,NULL);
  *wct = (double)(tp.tv_sec+tp.tv_usec/1000000.0);
}


int main() {
double *table;
double ts,te,t;
double skr;

  table = (double *)malloc(NROWS*NCOLS*sizeof(double)); 
  if (table==NULL) {
    printf("alloc error!\n");
    exit(1);
  }

  for (int i = 0; i < NROWS * NCOLS; i++){
	table[i] = 1.0;
  }
  
  get_walltime(&ts);
  
  
	for ( int j = 0; j < NCOLS; j++){
		
		for ( int i = 0; i < NROWS; i++){

		skr = table[i]; //για την μη απαλειφη των λουπ

	}
  }
	
  get_walltime(&te);

  t = te - ts; // η διαφορά των δυο timestamps είναι ο χρόνος που χρειάστηκε
  printf("%f\n",t);
  
  free(table);

  return 0;
}

