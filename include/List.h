#ifndef LIST_H
#define LIST_H
#include "Stadion.h"

class List
{
     Stadion *Head, *Tail;

 public:
     int count_ =0;
     List();
     ~List();
     void Show();
     void Add(string name, string sport , int year, int places, int arenas);
     void Show_1(int x);
     void Add_1(string name, string sport , int year, int places, int arenas, int x);
     void Delete(int x);
     void Order();
     void Filter(string choos);
     void File();
     void operator[] (int x)
     {
         Show_1(x+1);
     }
};

#endif // LIST_H
