





void shift_element(int *arr, int i) {
	for(int v = i; 0 < v; v--) {
		*(arr + v) = *(arr + v - 1);
	}
}

void insertion_sort(int *arr, int len) {
	int key, j;
	for(int i = 1 ; i < len; i++){
		key = *(arr + i);
		j = i - 1;
		while( j >= 0 && *(arr + j) > key){
			*(arr + j + 1) = *(arr + j);
			j = j - 1;
		}
		*(arr + j + 1) = key;
	}
}