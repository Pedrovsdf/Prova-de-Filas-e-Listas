node_t * alloc_node(){
	// Aloca��o de um novo n�, com utilizando malloc
    node_t *aux = malloc(sizeof(node_t));
    if (aux == NULL) {
        aux->info = 0;
        aux->next = NULL;
    }
    return aux;
}


void free_node(node_t *n){
	// free_nodes na posi��o next ir� receber o endere�o de mem�ria de n
	free_nodes->next = n;
}

void free_node(node_t *n){
	// Se n for diferente de NULL entrar� no if
	if (n != NULL) {
		//Uma vari�vel ultimo_no ser� criada
       node_t * ultimo_no;
       // Se free_nodes na posi��o next for NULL entrar� no if
       if (free_nodes->next == NULL) {
           ultimo_no = free_nodes;
       } else {
           ultimo_no = free_nodes->next;
           // O �ltimo no ser� concatenado
           do {
               ultimo_no = ultimo_no->next;
           } while (ultimo_no->next != NULL)
       }

       // O �ltimo no na posi��o next recebe n
       ultimo_no->next = n;
   }
}
