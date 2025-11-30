215  vi array_sum.c<br>
216  mpicc -o array_sum array_sum.c<br>
217  mpirun -np 4 ./array_sum<br>
<br>
225  vi factorial.c<br>
226  mpicc -o factorial factorial.c<br>
227  mpirun -np 4 ./factorial<br>
<br>
228  vi bank.c<br>
229  mpicc -o bank bank.c<br>
230  mpirun -np 4 ./bank<br>
<br>
231  vi merge_sort.c<br>
232  mpicc -o merge merge_sort.c<br>
233  mpirun -np 4 ./merge<br>
<br>
234  vi mutex.c<br>
235  mpicc -o mutex mutex.c<br>
236  mpirun -np 4 ./mutex<br>
<br>
237  vi prod_consum.c<br>
238  mpicc -o prod_consum prod_consum.c<br>
239  mpirun -np 4 ./<br>
<br>
246  vi parallel.c<br>
247  gcc -fopenmp parallel.c -o parallel<br>
248  ./parallel<br>
249  mpicc -fopenmp parallel.c -o parallel<br>
250  mpirun -np 4 ./parallel<br>
<br>
Troubleshooting:<br>
<br>
mpirun --report-pid --display-allocation -np 1 hostname<br>
mpirun -np 1 --display-map hostname<br>

