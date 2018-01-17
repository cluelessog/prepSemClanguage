#include <stdio.h>
#include <stdlib.h>
#include "node.h"
static node *newNode(void);
/*************** public interface *************/
char *INTEGER = "integer";
char *REAL = "real";
char *STRING = "string";
node *
newIntegerNode(int v)
{
node *p = newNode();
p->type = INTEGER;
p->ival = v;
return p;
}
node *
newRealNode(double v)
{
node *p = newNode();
p->type = REAL;
p->rval = v;
return p;
}
node *
newStringNode(char *v)
{
node *p = newNode();
p->type = STRING;
p->sval = v;
return p;
}

/*************** private methods *************/
static node *
newNode()
{
node *n = (node *) malloc(sizeof(node));
if (n == 0) { fprintf(stderr,"out of memory"); exit(-1); }
return n;
}
static void print(node *p){

    printf("Parent\n");
	printf("%s\n", p->type);
	printf("%d\n", p->ival);
	printf("%f\n", p->rval);
	printf("%s\n\n", p->sval);

	printf("Child\n");
	printf("%s\n", p->child->type);
	printf("%d\n", p->child->ival);
	printf("%f\n", p->child->rval);
	printf("%s\n\n", p->child->sval);

	printf("Next\n");
	printf("%s\n", p->next->type);
	printf("%d\n", p->next->ival);
	printf("%f\n", p->next->rval);
	printf("%s\n\n", p->next->sval);

}
static void deleteNode(node *p)
{
    printf("\nmemory is freed\n");
    free(p);
}
void (*display)(struct nodeobject*) = print;
void (*destructor)(struct nodeobject*) = deleteNode;
