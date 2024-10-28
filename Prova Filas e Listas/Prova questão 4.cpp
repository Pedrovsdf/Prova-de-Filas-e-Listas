node_t * search_and_insert(node_t **l, int x){
	// For para percorrer a lista e procurar o valor
	for (node_t *aux = (*l); aux != NULL; aux = aux->next){
		// Se o campo informa��o da vari�vel aux for igual ao valor procurado, retornar� o endere�o da lista aux
		if (aux->info == x){
			return aux;
		}
	}
	// Se o valor n�o foi encontrado, ser� adicionado atrav�s do insert
	return insert(l, x);
}
