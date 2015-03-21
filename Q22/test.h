void  fun ( int a[][N] );
void test( )
{
  FILE *rf, *wf ;
  int i, j, a[5][5] ;

  rf = fopen("in.dat", "r") ;
  wf = fopen("out.dat", "w") ;
  for(i = 0 ; i < 5 ; i++)
  for(j = 0 ; j < 5 ; j++)
    fscanf(rf, "%d ", &a[i][j]) ;
  fun(a) ;
  for ( i = 0;  i < 5; i++ ) {
    for ( j = 0; j < 5; j++ ) fprintf(wf, "%4d", a[i][j] );
    fprintf(wf, "\n");
  }
  fclose(rf) ;
  fclose(wf) ;
}
