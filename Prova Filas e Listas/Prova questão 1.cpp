int remove() {
	// salva elemento que ser� removido da fila
	int x = queue[0];
	// desloca todos os elementos da fila uma posi��o abaixo
	for (int i = 0; i < rear; i++)
		queue[i] = queue[i+1];
	// atualiza o ponteiro de final da fila
	rear -= 1;
	// retorna o elemento salvo (desenfileirado)
	return x;
}

bool empty() {
	// Se front for maior que rear retornar� true, indicando que a fila est� vazia
	return (front > rear);
}

void insert (int x) {
	// Se rear for diferente do �ltimo �ndice do vetor entrar� no if
	if(rear != 99){
		// queue na posi��o rear + 1 receber� o valor a ser inserido
		queue[rear+1] = x;
		// rear ser� incrementado por 1
		rear = rear + 1;
	// Se rear for igual ao �ltimo �ndice do vetor entrar� no else
	} else {
		// Se queue na posi��o 0 for igual a zero, que indica que a posi��o est� vazia, entrar� no if 
		if(queue[0] == 0){
			// Desloca todos os elementos da fila uma posi��o abaixo, j� que o espa�o anterior est� vazio.
			for (int i = 0; i < rear; i++){
				queue[i] = queue[i+1];
			}
		} else {
			// Caso o espa�o anterior n�o esteja vazio, ter� um print alertando que n�o foi poss�vel adicionar o valor.
			printf("N�o � poss�vel adicionar um novo valor.");
		}
	}
}

int remove() {
	// salva elemento que ser� removido da fila
	int x = queue[front];
	// queue na posi��o front receber� 0, que indicar� que a posi��o est� vazia
	queue[front] = 0;
	// front ir� ser incrementado a cada vez que um item for removido
	front = front+1;
	// retorna o elemento salvo (desenfileirado)
	return x;
}
