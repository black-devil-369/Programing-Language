#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int vertext;
    node *next;
};
class AdjList{
    private:
       node *start;
};
class Graph{
    private:
       int V_count;
       AdjList *arr;
};