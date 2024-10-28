node_t * alloc_node(){
	// Alocação de um novo nó, com utilizando malloc
    node_t *aux = malloc(sizeof(node_t));
    if (aux == NULL) {
        aux->info = 0;
        aux->next = NULL;
    }
    return aux;
}


void free_node(node_t *n){
	// free_nodes na posição next irá receber o endereço de memória de n
	free_nodes->next = n;
}

void free_node(node_t *n){
	// Se n for diferente de NULL entrará no if
	if (n != NULL) {
		//Uma variável ultimo_no será criada
       node_t * ultimo_no;
       // Se free_nodes na posição next for NULL entrará no if
       if (free_nodes->next == NULL) {
           ultimo_no = free_nodes;
       } else {
           ultimo_no = free_nodes->next;
           // O último no será concatenado
           do {
               ultimo_no = ultimo_no->next;
           } while (ultimo_no->next != NULL)
       }

       // O último no na posição next recebe n
       ultimo_no->next = n;
   }
}
