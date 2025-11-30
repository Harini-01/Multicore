215  vi array_sum.c
216  mpicc -o array_sum array_sum.c
217  mpirun -np 4 ./array_sum

225  vi factorial.c
226  mpicc -o factorial factorial.c
227  mpirun -np 4 ./factorial

   228  vi bank.c
  229  mpicc -o bank bank.c
  230  mpirun -np 4 ./bank

   231  vi merge_sort.c
  232  mpicc -o merge merge_sort.c
  233  mpirun -np 4 ./merge

   234  vi mutex.c
  235  mpicc -o mutex mutex.c
  236  mpirun -np 4 ./mutex


237  vi prod_consum.c
  238  mpicc -o prod_consum prod_consum.c
  239  mpirun -np 4 ./


   246  vi parallel.c
  247  gcc -fopenmp parallel.c -o parallel
  248  ./parallel
  249  mpicc -fopenmp parallel.c -o parallel
  250  mpirun -np 4 ./parallel
  
