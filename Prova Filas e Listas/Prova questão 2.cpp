struct Node {
int info;          // armazena a informa��o do n�
	struct Node *next; // armazena o ponteiro para o pr�ximo elemento da lista encadeada
};

typedef struct Node node_t;






void concat(node_t *l1, node_t *l2){
 	// Se a lista 1 for vazia, ela ir� receber a lista 2
    if (l1 == NULL) {
		l1 = l2;
	// Se a lista 1 n�o for vazia, entrar� no else
	} else {
		// Vari�veis auxiliares para percorrer a lista
   		node_t* aux1; 
    	node_t* aux2;
		// A vari�vel auxiliar 1 receber� a lista 1
    	aux1 = l1;   
    	// Enquanto a vari�vel auxiliar 1, que receber� o pr�ximo elemento apontado por ela, n�o for nulo, continuar� no do
    	do { 
   			aux2 = aux1; 
       		aux1 = aux1->prox;
    	} 
       	while(aux1 != NULL);
	// O pr�ximo valor da vari�vel auxiliar 2 recebe a lista 2 
	aux2->prox = l2;
	}
}
