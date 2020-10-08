#ifndef HASH_H
#define HASH_H
#include "no.h"
typedef int (*func_hash)(int);

class hash
{
    public:
        hash(int m , func_hash h);
        ~hash();

        no* insert(int data);
        no* lookup(int data);
        void destroy();


    private:
        no* vet[];
        int tam;

};

#endif // HASH_H
