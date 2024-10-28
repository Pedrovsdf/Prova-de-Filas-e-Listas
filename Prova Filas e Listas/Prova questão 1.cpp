int remove() {
	// salva elemento que será removido da fila
	int x = queue[0];
	// desloca todos os elementos da fila uma posição abaixo
	for (int i = 0; i < rear; i++)
		queue[i] = queue[i+1];
	// atualiza o ponteiro de final da fila
	rear -= 1;
	// retorna o elemento salvo (desenfileirado)
	return x;
}

bool empty() {
	// Se front for maior que rear retornará true, indicando que a fila está vazia
	return (front > rear);
}

void insert (int x) {
	// Se rear for diferente do último índice do vetor entrará no if
	if(rear != 99){
		// queue na posição rear + 1 receberá o valor a ser inserido
		queue[rear+1] = x;
		// rear será incrementado por 1
		rear = rear + 1;
	// Se rear for igual ao último índice do vetor entrará no else
	} else {
		// Se queue na posição 0 for igual a zero, que indica que a posição está vazia, entrará no if 
		if(queue[0] == 0){
			// Desloca todos os elementos da fila uma posição abaixo, já que o espaço anterior está vazio.
			for (int i = 0; i < rear; i++){
				queue[i] = queue[i+1];
			}
		} else {
			// Caso o espaço anterior não esteja vazio, terá um print alertando que não foi possível adicionar o valor.
			printf("Não é possível adicionar um novo valor.");
		}
	}
}

int remove() {
	// salva elemento que será removido da fila
	int x = queue[front];
	// queue na posição front receberá 0, que indicará que a posição está vazia
	queue[front] = 0;
	// front irá ser incrementado a cada vez que um item for removido
	front = front+1;
	// retorna o elemento salvo (desenfileirado)
	return x;
}
