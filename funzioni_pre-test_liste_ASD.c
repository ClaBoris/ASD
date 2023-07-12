//somma campo info tutti i nodi

int somma(plist p){
  if(p==NULL) return 0;
  int s = p->info;
  while(p->next!=NULL){
     s+=p->next->info;
     p=p->next;
  }
  return s;
}


//trova massimo elemento della lista

int massimo(plist p){
   if(p==NULL) return 0;
   int max=p->info;
   while(p->next!=NULL){
      if(max<p->next->info)
         max=p->next->info;
    p=p->next;
   }
   return max;
}


//cerca nodo con campo info pari a v passato

int cerca(plist p, int v){
   if(p==NULL) return 0;
   while(p->next!=NULL){
      if(p->info==v)
         return 1;
    p=p->next;
   }
   return 0;
}


//Verifica, se esiste, un nodo con campo info pari alla lunghezza della lista

int lunghezza(plist p){
    if(p==NULL) return 0;
    int c=0;
    while(p->next!=NULL){
      c++;
      p=p->next;
    }
    return c;
}

int verifica(plist p){
   if(p==NULL) return 0;
   int l = lunghezza(p);
   if(p->info==l) return 1;
   while(p->next!=NULL){
      p=p->next;
      if(p->next->info == l) 
         return 1;
   }
   return 0;
}
     

//Conta  nodi con campo info pari alla lunghezza della lista

int lunghezza(plist p){
    if(p==NULL) return 0;
    int c=0;
    while(p->next!=NULL){
      c++;
      p=p->next;
    }
    return c;
}


int conta(plist p){
    if(p==NULL) return 0;
    int l = lunghezza(p);
    int c = 0;
    if(p->info==l) c++;
    while(p->next!=NULL){
       p=p->next;
       if(p->info==l)
       c++;
    }
    return c;
}


//verifica che tutta la lista sia crescente

int is_crescente(plist p){
    if(p==NULL) return 0;
    while(p->next!=NULL){
        if(p->info>p->next->info)
          return 0;
    p=p->next;
    }
    return 1;
}


//verifica che il primo elemento sia uguale all'ultimo

int verifica(plist p){
    if(p==NULL) return 0;
    plist l=p;
    while(p->next!=NULL){
        p=p->next;
    }
    return (n->info==p->info);
}


//verifica che campo info di due elementi consecutivi sia uguale

int verifica(plist p){
    if(p==NULL) return 0;
    while(p->next!=NULL){
       if(p->info==p->next->info)
         return 1;
    p=p->next;
    }
    return 0;
}


//verifica che campo info di due elementi della lista sia uguale

int verifica(plist p){
    if(p==NULL) return 0;
    while(p->next!=NULL){
      plist n = p->next;
      if(p->info==n->info) return 1;
      while(n->next!=NULL){
         n=n->next;
         if(n->info == p->info) 
           return 1;
      }
    p=p->next;  
    }
  return 0;
}


//conta i nodi che che hanno campo info minore dell'adiacente 

int conta(plist  p){
    if(p==NULL) return 0;
    int c=0;
    while(p->next!=NULL){
       if(p->info < p->next->info)
        c++;
    p=p->next;
    }
  return c;
}


//COMUNI(plist p1, plist p2)

int comuni(plist p1, plist p2){
    if(p1==NULL || p2==NULL) return 0;
    int c=0;
    while(p1!=NULL){
        int v=0;
        while(p2!=NULL && v==0){
            if(p2->info == p1->info){
               c++;
               v=1;
            }else{
             p2=p2->next;
            }
        }
    p1=p1->next;
    }
  return c;
}


































