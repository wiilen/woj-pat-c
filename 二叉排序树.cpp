#include<stdio.h>
#include<malloc.h>

typedef struct BTNode{
	int data;
	struct BTNode *lchild,*rchild;
}BitNode,* BiTree;

void insert(BiTree &T,BitNode *s){
	if(T==NULL) T=s;
	else{
		if(s->data<T->data) insert(T->lchild,s);
		if(s->data>T->data) insert(T->rchild,s);
	}
}

void preorder(BiTree &T){
	if(T){
		printf("%d",T->data);
		preorder(T->lchild);
		preorder(T->rchild);
	}
}

void inorder(BiTree &T){
	if(T){
		inorder(T->lchild);
		printf("%d",T->data);
		inorder(T->rchild);
	}
}

void  postorder(BiTree &T){
	if(T){
		postorder(T->lchild);
		postorder(T->rchild);
		printf("%d",T->data);
	}
}

int main(){
	int n,i,x;
	while(scanf("%d",&n)!=EOF){
		BiTree B=NULL;
		for(i=0;i<n;++i){
			scanf("%d",&x);
			BitNode *s;
			s=(BiTree)malloc(sizeof(BitNode));
			s->data=x;
			s->lchild=NULL;
			s->rchild=NULL;
			insert(B,s);
		}
		preorder(B);
		printf("\n");
		inorder(B);
		printf("\n");
		postorder(B);
		printf("\n");
	}
	return 0;
}
