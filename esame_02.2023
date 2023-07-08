/*la funzione restituisce 1 se, per ogni componente connessa di g, esiste almeno un nodo di a il cui numero di figli è uguale al numero dei nodi della 
componente connessa in questione. Altrimenti 0.*/

void DFS_colora(nodo*n, int color){
    n->color=color;
    elem_archi* ea= n->archi;
    while(en!=NULL){
        nodo*altro=ea->info->from;
        if(altro==n)
             altro = ea->info->to;
        if(altro->color==0)
             DFS_colora(altro, color);
    ea=ea->next;
    }
}

int dim_comp(grafo*g, int comp){
    int c=0;
    elem_nodi*en=g->nodi;
    while(en!=NULL){
        if(en->info->color==comp)
          c++;
    en=en->next;
    }
    return c;
}


int conta_figli(nodo_albero*a){
    if(a==NULL) return 0; 
    int c=0;
    while(a!=NULL){
        c++;
        a=a->right_sibling;
    }
    return c;
}

int num_comp(grafo*g){
    elem_nodi*en = g->nodi;
    while(en!=NULL){
        en->info->color=0;
        en=en->next;
    }
    int c=0;
    en=g->nodi;
    while(en!=NULL){
        if(en->info->color==0)
           c++;
           DFS_colora(en->info,c);
    en=en->next;
    }
    return c;
}

int verifica(nodo_albero*a, grafo*g){
    if(g==NULL || g->nodi==NULL) return 0;
    int c=num_comp(g);
    for(int i=0;i<=c;i++){
        if(dim_comp(g,i)==conta_figli(a->left))
          return 1;
    }
    return 0;
}
