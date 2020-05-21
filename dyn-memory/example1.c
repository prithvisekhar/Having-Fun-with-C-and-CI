/** Dynamic Memory - 1D array*/

int main() {
  int n=10,sum=0;
  int *parr=malloc(n*sizeof(int)); //calloc(n,sizeof(int)
  for(int i=0;i<n;i++)
    parr[i]=rand()%100; //*(parr+i)
  //int *ptr=parr;
  for(int i=0;i<n;i++)
    sum+=parr[i]; //*(parr+i) //*ptr++;
  free(parr);
  parr=NULL;
  return 0;
}  
