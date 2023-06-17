void mm(int *v, int vezes, int *min, int *max){ 
int i;
*min = v[0];
*max = v[0]; 
for (i = 1; i < vezes; i++){ 
	if (v[i] > *max){
		*max = v[i];
	} else if (v[i] < *min){
		*min = v[i];
		}
	}
}
