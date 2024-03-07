#include <stdio.h>
#define MAX_length 20

typedef struct
{
  int u, v;
} edge;

typedef struct
{
  int n, m;
  edge data[MAX_length];
} graph;

typedef struct
{
  int data[MAX_length];
  int size;
} list;

void makeNull(list *L)
{
  L->size = 0;
}

int elementAt(list *L, int x)
{
  return L->data[x];
}

void pushlist(list *L, int x)
{
  L->data[L->size] = x;
  L->size++;
}

void initGraph(graph *G, int n)
{
  G->n = n;
  G->m = 0;
  printf("Do thi n duoc khoi tao voi so dinh n = %d va so canh m = %d\n", G->n, G->m);
}

void addEdge(graph *G, int u, int v)
{
  int i;
  for (i = 0; i < G->m; i++)
  {
    if ((G->data[i].u == u && G->data[i].v == v) && (G->data[i].u == v && G->data[i].v == u))
    {
      printf("Canh da co trong do thi!");
      return;
    }
  }
  G->data[G->m].u = u;
  G->data[G->m].v = v;
  G->m++;
  printf("Do thi da them vao canh %d %d\n", G->data[G->m - 1].u, G->data[G->m - 1].v);
}

int adjacent(graph *G, int u, int v)
{
  int i;
  for (i = 0; i <= G->m; i++)
  {
    if ((G->data[i].u == u && G->data[i].v == v) && (G->data[i].u == v && G->data[i].v == u))
    {
      return 1;
    }
  }
}

void degree(graph *G, int x)
{
  int i, count = 0;
  for (i = 0; i <= G->m; i++)
  {
    if (adjacent(G, x, i))
    {
      count++;
    }
  }
  printf("Bac cua canh %d la %d\n", x, count);
}

list neighbors(graph *G, int x)
{
  list listVertex;
  makeNull(&listVertex);
  int i;
  for (i = 1; i <= G->n; i++)
  {
    if (adjacent(G, x, i) == 1)
    {
      pushlist(&listVertex, i);
    }
  }
  return listVertex;
}

// Stack
typedef struct
{
  int data[100];
  int size;
} Stack;

void make_null_stack(Stack *S)
{
  S->size = 0;
}

void push(Stack *S, int x)
{
  S->data[S->size] = x;
  S->size++;
}

void pop(Stack *S, int x)
{
  S->size--;
}

int top(Stack S)
{
  return S.data[S.size - 1];
}

int empty(Stack S)
{
  return S.data[S.size - 1];
}

// Duyet thoe chieu sau
void depth_first_search(graph *G)
{
  printf("\nDuyen DFS:\n");
  Stack L;
  int mark[100];
  make_null_stack(&L);
  int i;

  for (i = 1; i <= G->; i++)
    mark[i] = 0;
}

int main()
{
  int n;
  printf("hello");

  return 0;
}
