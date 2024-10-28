node_t * search_and_insert(node_t **l, int x){
	// For para percorrer a lista e procurar o valor
	for (node_t *aux = (*l); aux != NULL; aux = aux->next){
		// Se o campo informação da variável aux for igual ao valor procurado, retornará o endereço da lista aux
		if (aux->info == x){
			return aux;
		}
	}
	// Se o valor não foi encontrado, será adicionado através do insert
	return insert(l, x);
}
