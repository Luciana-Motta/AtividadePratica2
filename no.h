#ifndef NO_H
#define NO_H

class no
{
    public:
        no();
        ~no();
        int getInfo();
        no* getProx();
        void setInfo(int val);
        void setProx(no *p);
    private:
        int info; // informacao
        no *prox; // ponteiro para o proximo
    };

#endif // NO_H
