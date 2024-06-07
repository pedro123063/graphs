#ifndef NODE_h
#define NODE_H

#include <iostream>

using namespace std;

#define TEMPLA template <class T>

TEMPLA

class nodeGraph
{
    private:
        T info;
        nodeGraph<T>* next;
        nodeGraph<T>* list;
    public:
        noGen(T infor)
        {
            info=infor;
            next=NULL;
            list=NULL;
        }
        
        void setNext(nodeGraph<T>* pt){next=pt;}
        void setInfo(T in){info=in;}
        void setList(nodeGraph<T>* pt){list=pt;}


        T getInfo(){return info;}
        nodeGraph<T>* getNext(){return next;} 
        nodeGraph<T>* getList(){return list;}

};
#endif