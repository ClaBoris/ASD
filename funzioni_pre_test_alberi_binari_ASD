//conta il numero di nodi che sono foglie 

int count_leaf(albero a){
    if(a==NULL) return 0;
    int c=0;
    if(a->left==NULL && a->right==NULL) c++;
    return c + count_leaf(a->left) + count_leaf(a->right);
}


//verifica se esiste una foglia destra

int is_foglia(albero a){
    if(a==NULL) return 0;
    if(a->left==NULL && a->right==NULL) return 1;
    return 0;
}

int verifica(albero a){
    if(a==NULL) return 0;
    if(a->right!=NULL && is_foglia(a->right)) return 1;
    return verifica(a->left) || verifica(a->right);
}


// Verifica se esiste almeno una foglia con campo info uguale ad un valore (val) da input 

int is_foglia(albero a){
    if(a==NULL) return 0;
    if(a->left==NULL && a->right==NULL) return 1;
    return 0;
}

int verifica(albero a, int v){
     if(a==NULL) return 0;
     if(is_foglia(a) && a->info == v) return 1;
     return verifica(a->left, v) || verifica(a->right, v);
}


//Verifica se esistono due foglie con campo info uguale ad un valore (val) da input

int verifica(albero a , int v){
     if(a==NULL) return 0;
     int static c=0;
     if(a->left==NULL && a->right==NULL && a->info==v) c++;
     if(c==2) return 1;
     return verifica(a->left, v) || verifica(a->right, v);
}


//Funzione che calcola l'altezza dell'albero 

int altezza(albero a){
     if(a==NULL) return -1;
     int l= altezza(a->left);
     int r=altezza(a->right);
     if(l>r) return l+1;
     return r+1;
}


//Funzione che calcola il numero dei nodi dell'albero 

int conta_nodi(albero a){
     if(a==NULL) return 0;
     return 1 + conta_nodi(a->left) + conta_nodi(a->right);
}


//campo_info_uguale_a_2

int conta(albero a){
     if(a==NULL) return 0;
     if(a->info==2) return 1;
     return conta(a->left) + conta(a->right);
}


//Verifica se esiste un nodo con campo info pari all'altezza dell'albero (senza passare altezza)

int altezza(albero a){
     if(a==NULL) return -1;
     int l = altezza(a->left);
     int r = altezza(a->right);
     if(l>r) return l+1;
     return r+1;
}

int verifica(albero a, int h){
     if(a==NULL) return 0;
     if(a->info == h) return 1;
     return verifica(a->left, h) || verifica(a->right, v);
}

int verifica_ric(albero a){
     return verifica(a, altezza(a));
}


//conta nodi interni

int conta(albero a){
     if(a==NULL) return 0;
     if(!(a->left==NULL && a->right==NULL)) return 1;
     return conta(a->left) + conta(a->right);
}


//Funzione che verifica se esiste un nodo che ha entrambi i figli foglie 

int is_foglia(albero a){
     if(a==NULL) return 0;
     if(a->left==NULL && a->right==NULL) return 1;
     return 0;
}

int verifica(albero a){
     if(a==NULL) return 0;
     if(a->left!=NULL && a->right!=NULL && is_foglia(a->left) && is_foglia(a->right)) return 1;
     return verifica(a->left) || verifica(a->right);
}


//Conta nodi con campo info pari alla distanza dalla radice 

int conta(albero a, int p){
      if(a==NULL) return 0;
      int c=0;
      if(a->info == p) c++;
      return c + conta(a->left, p+1) + conta(a->right, p+1);
}

int conta_ric(albero a){
      return conta(a,0);
}


//Verifica che l'albero sia completo (ha due figli foglie)

int verifica(albero a){
       if(a==NULL) return 0;
       if(a->left==NULL && a->right==NULL) return 1;
       return verifica(a->left) && verifica(a->right);
}


//somma info nodi

int somma(albero a){
       if(a==NULL) return 0;
       int s=a->info;
       return s + somma(a->left) + somma(a->right);
}


//verifica se l'albero ha solo nodi a sinistra

int verifica(albero a){
        if(a==NULL) return 0;
        if(a->left!=NULL && a->right==NULL) return 1;
        return verifica(a->left) && verifica(a->right);
}


//conta_figli_sx  

int conta(albero a){
        if(a==NULL) return 0;
        int c=0;
        if(a->left!=NULL) c++;
        return c + conta(a->left) + conta(a->right);
}


//Verifica se esiste almeno un nodo che abbia due nodi figli e il figlio a sx ha campo info uguale al figlio a dx 

int verifica(albero a){
        if(a==NULL) return 0;
        if(a->left!=NULL && a->right!=NULL && a->left->info == a->right->info) return 1;
        return verifica(a->left) || verifica(a->right);
}


//verifica se esiste almeno un nodo interno con campo info uguale altezza totale dell'albero 

int verifica(albero a, int h){
        if(a==NULL) return 0;
        if((!(a->left==NULL && a->right==NULL)) && a->info == h) return 1;
        return verifica(a->left, h) || verifica(a->right, h);
}


//verifica se almeno un nodo foglia con campo info uguale altezza totale dell'albero 

int verifica(albero a, int h){
        if(a==NULL) return 0;
        if(a->left==NULL && a->right==NULL && a->info ==h) return 1;
        return verifica(a->left, h) || verifica(a->right, h);
}








































