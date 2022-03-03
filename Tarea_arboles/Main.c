#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *father;
	struct node *right;
	struct node *left;
	int value;
};

/*struct node *create_node(struct node *father, int value);
void add_value(struct node *tree, int value);*/

struct node *create_node(struct node *father, int value){
	struct node *n = calloc(sizeof(struct node),1);
	n->father = father;
	n->value = value;
	return n;
};
void add_value(struct node **tree, int value){
	struct node *tmp, *pivot;
	//tmp=malloc(sizeof(struct node));
	//strcpy(tmp->string, value);
	int right = 0;
	if(tree){
		tmp = *tree;
		while(tmp != NULL){
			pivot = tmp;
			if(value > tmp -> value){
				tmp = tmp -> right;
				right = 1;
			}else{
				tmp = tmp -> left;
				right = 0;
			}
		}
		tmp = create_node(pivot, value);
		if(right){
			printf("Insertando %i del lado derecho de %i\n",value, pivot -> value);
			pivot -> right = tmp;
		} else{
			printf("Insertando %i del lado izquiero de %i\n",value, pivot -> value);
			pivot -> left = tmp;
	}
	}else{
		printf("ERRROR\n");
	}
}

int main(int argc, char const *argv[])
{	
	int value;
	int values=0;
	struct node *tree = NULL;
	tree = malloc(sizeof(struct node));
	scanf("%i", &values);
	for (int i = 0; i < values; ++i){
		scanf("%d", &value);
		add_value(&tree,value);
	}

	/*tree = create_node(NULL, 40);
	add_value(tree,10);
	add_value(tree,50);*/
	return 0;
}









