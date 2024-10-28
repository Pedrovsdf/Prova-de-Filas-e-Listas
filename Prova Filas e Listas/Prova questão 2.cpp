struct Node {
int info;          // armazena a informação do nó
	struct Node *next; // armazena o ponteiro para o próximo elemento da lista encadeada
};

typedef struct Node node_t;






void concat(node_t *l1, node_t *l2){
 	// Se a lista 1 for vazia, ela irá receber a lista 2
    if (l1 == NULL) {
		l1 = l2;
	// Se a lista 1 não for vazia, entrará no else
	} else {
		// Variáveis auxiliares para percorrer a lista
   		node_t* aux1; 
    	node_t* aux2;
		// A variável auxiliar 1 receberá a lista 1
    	aux1 = l1;   
    	// Enquanto a variável auxiliar 1, que receberá o próximo elemento apontado por ela, não for nulo, continuará no do
    	do { 
   			aux2 = aux1; 
       		aux1 = aux1->prox;
    	} 
       	while(aux1 != NULL);
	// O próximo valor da variável auxiliar 2 recebe a lista 2 
	aux2->prox = l2;
	}
}
