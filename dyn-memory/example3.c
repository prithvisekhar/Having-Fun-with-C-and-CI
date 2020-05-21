/** Dynamic Memory - realloc */

int main() {
  int *xarr,*yarr,*zarr;
  xarr=malloc(10*sizeof(int)); //calloc(10,sizeof(int));
  for(int i=0;i<n;i++)
    xarr[i]=rand()%100; //*(xarr+i)

  yarr=realloc(zarr,20*sizeof(int));
  xarr=NULL;
  int *ptr=yarr;
  for(int i=0;i<20;i++)
    sum+=*ptr++; //*(yarr+i) //yarr[i]

  zarr=relloc(yarr,5*sizeof(int));
  yarr=NULL;
  for(int i=0;i<5;i++)
    printf("%d\n",zarr[i]);

  free(parr3);
  parr3=NULL;
  return 0;
}  
