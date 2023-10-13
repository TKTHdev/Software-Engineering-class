#include <iostream>
using namespace std;

typedef struct List
{
    struct List *next;
    int data;
}List;

struct List *L[101];

int main()
{
    //Allocate memory
    for(int i=1;i<=100;i++)L[i] = (List*)malloc(sizeof(List));

    L[1]->data = 1;
    for(int i=2;i<=100;i++)
    {
        L[i]->data = i;
        L[i-1]->next = L[i]; 
    }
    L[100]->next = NULL;

    //Print the list
    for(int i=1;i<=100;i++)cout<<L[i]->data<<" ";
    return 0;
}
