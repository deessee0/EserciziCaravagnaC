/* implementare struct "numero complesso" con somma e prodotto */

#include<stdio.h>
#include<stdlib.h>

struct numero_complesso {
  float reale; //parte reale
  float immaginaria; //parte immaginaria 
};

typedef struct numero_complesso NumeroComplesso;

/* funzione per implementare la somma tra due numeri complessi */
NumeroComplesso somma(NumeroComplesso x, NumeroComplesso y){
  //numero complesso che conterrà la somma 
  NumeroComplesso s;
  //sommo le parti reali di x e y
  s.reale = x.reale + y.reale;
  //sommo le parti immaginarie di x e y
  s.immaginaria = x.immaginaria + y.immaginaria;
  //torno s = x + y
  return s;
}

/*funzione per implementare il prodotto tra due numeri complessi */ 
NumeroComplesso prodotto(NumeroComplesso x, NumeroComplesso y){
  //numero complesso che conterrà il prodotto 
  NumeroComplesso p;
  //parte reale del prodotto 
  p.reale = x.reale*y.reale - x.immaginaria*y.immaginaria;
  //parte immaginaria del prodotto 
  p.immaginaria = x.reale*y.immaginaria + x.immaginaria*y.reale;
  //ritorno p = x*y
  return p;
}

/* funzione per implementare la somma di un array di numeri complessi */
NumeroComplesso somma_array(NumeroComplesso z[],int dim){
  //numero complesso che conterrà la somma dell'array 
  NumeroComplesso s;
  //lo inizializzo con il primo numero complesso nell'array 
  s.reale = z[0].reale;
  s.immaginaria = z[0].immaginaria;

  for(int i=1; i<dim; i++){
    //ogni iterazione aggiungo un elemento dell'array a s
    s = somma(s, z[i]);
  }

  //ritorno la somma di tutti gli elementi dell'array 
  return s;
}

/* funzione ausiliaria per stampare un numero complesso */
void stampa_complesso(NumeroComplesso x){
  //stampo nel formato x = a + b*i 
  printf("%.2f + %.2f i\n", x.reale, x.immaginaria);
}

int main() {
  //dichiaro due complessi di cui voglio calcolare somma e prodotto 
  NumeroComplesso x;
  printf("Inserire parte reale e immaginaria di x: ");
  scanf("%f %f", &x.reale, &x.immaginaria);
  NumeroComplesso y;
  printf("Inserire parte reale e immaginaria di y: ");
  scanf("%f %f", &y.reale, &y.immaginaria);

  //stampo x 
  printf("\nx = ");
  stampa_complesso(x);

  //stampo y
  printf("\ny = ");
  stampa_complesso(y);

  //calcolo la somma x + y
  NumeroComplesso s = somma(x, y);

  //stampo il risultato della somma
  printf("\nx + y = ");
  stampa_complesso(s);

  //calcolo il prodotto x*y
  NumeroComplesso p = prodotto(x, y);

  //stampo il risultato del prodotto 
  printf("\nx*y = ");
  stampa_complesso(p);

  //---------Parte Opzionale--------//
  //creo un array (statico) di numeri complessi 
  int n = 5; 
  NumeroComplesso z[n];
  //inizializzo elementi array 
  for(int i=0; i<n; i++){
    z[i].reale = i;
    z[i].immaginaria = i+3;
  }

 NumeroComplesso s1 = somma_array(z, n); 
 
 printf("\nLa somma di tutti gli elementi nell'array è:\ns1 = ");
 stampa_complesso(s1);


  return(0);
}
