#include "hash.h"
#include "no.h"
#include <iostream>
typedef int (*func_hash)(int);
func_hash h;


hash::hash(int m , func_hash hs)
{
    tam = m;
    vet = new no[tam];
    for (int i = 0 ; i < m ; i++)
        vet[i] = NULL;
    h = hs;
}
hash::~hash()
{
    for( int i = 0 ; i < tam ; i++ )
    {
        no *p = vet[i]
        no *q = p
        while( p != NULL ) 
        {
            q = p->getProx(); 
            delet p;
            p = q;
        }

    {
}

no* insert(int data)
{
   int key = h(data);
   no *p = new no();
   p->setInfo(data);
   p->setProx(NULL);
   if(vet[i] == NULL)
       vet[i]->setProx(p);
   else 
   {
       no *q = vet[i]
       while(q->getProx() != NULL)
           q = q->getProx();
       q->setProx(p);
       return p;
   }

no* lookup(int data)
{
    int key = h(data);
    no *p = vet[i];
    while(p->getProx() != NULL && p->getInfo() != data)
        p = p->getProx();
    return p;
}

}

