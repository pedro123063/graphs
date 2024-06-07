#ifndef LISTSUCCESSORS_H
#define LISTSUCCESSORS_H

#define TEMPLA template <class T>

#include <iostream>
#include "noGen.h"
#include "nodeGraph.h"

using namespace std;

TEMPLA
class listSuccessors
{
    private:
        noGen<T>* start;
        int n;
    public:
        void addK(int k,T info);
        void removeK(int k);
        
        
};

#endif