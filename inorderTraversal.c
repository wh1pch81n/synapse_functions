#include <stdio.h>

typedef struct node{
  int val;
  struct node* left;
  struct node* right;
}node;

//in order traversal of a binary tree   
void in_order( node * curr){
  if(!curr){
    return;
  }
  in_order(curr->left);
  printf("%d " , curr->val);
  in_order(curr->right);
}

int main(){
  printf("the numbers 5, 2, 1, 7, and 3 will be put in order: ");
  
  //a manually made binary tree of nodes
  node five, two, one, seven, three;
  five =(node){ 5,&two , &seven };
  two =(node){ 2,&one ,&three };
  one =(node){ 1, NULL, NULL};
  seven= (node){ 7, NULL, NULL};
  three= (node){ 3, NULL, NULL};
  
  in_order(&five);
  printf("\n");

}
