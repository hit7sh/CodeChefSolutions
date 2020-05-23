#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
    int data,pos;
    struct tree *left, *right;
} node;
node *new(int v,int p){
    node *t=(node*)malloc(sizeof(node));
    return (t->left=t->right=NULL,t->data=v,t->pos=p,t);
}
node *insert(node*root,int val,int p){
    if(root==NULL){
        printf("%d\n", p);
        return new(val, p);
    }
    else if(val>root->data)
        root->right = insert(root->right, val, 2*p+1);
    else
        root->left = insert(root->left, val, 2*p);
    return root;
}
node *delete(node *root, int val){
    if(val > root->data)
        root->right = delete(root->right, val);
    else if(val < root->data)
        root->left = delete(root->left, val);
    else{
        if(root->left == NULL){
            node *t = root->right;
            free(root);
            return t;
        }else if(root->right == NULL){
            node *t = root->left;
            free(root);
            return t;
        }else{
            node *t=root->right;
            while(t->left)
                t=t->left;
            root->data = t->data;
            root->right = delete(root->right,root->data);
        }
    }
    return root;
}
void position(node* root, int n){   //using inorder traversal to find node
    if(root){
        if(root->data==n){
            printf("%d\n",root->pos);
            return;
        }
        position(root->left,n);
        position(root->right,n);
    }
}
int main(){
    node *root;
    int q,n;char x;
    for(scanf("%d ",&q);q--;){
        scanf("%c %d ",&x,&n);
        if(x=='i')
            root=insert(root,n,1);
        else
            position(root,n),root=delete(root,n);
    }
    return 0;
}
