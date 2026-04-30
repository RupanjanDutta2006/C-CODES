//Wap to create/insert a  BST tree from an array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node 
{
   int data; 	
   struct node *leftChild;
   struct node *rightChild;
} N;

N *root = NULL;

void insert(int);
N* search(int);
int search1(int);
void pre_order_traversal(N*);
void post_order_traversal(N*);
void inorder_traversal(N*);

int main() 
{
   int i,n,x;
   printf("Enter the Range=");
   scanf("%d",&n);
   int array[n];

   for(i=0;i<n;i++)
    {
      printf("Enter the No.=");
      scanf("%d",&array[i]);
    }

   for(i=0;i<n;i++)
    {
      insert(array[i]);
    }

    printf("Enter the No. to be Search=");
    scanf("%d",&x);

    if(search1(x)==1)
     printf("\nSearch Found");
    else
     printf("\nSearch NOT Found");

    printf("Enter the No. to be Search=");
    scanf("%d",&x);

   N *temp = search(x);

   if(temp != NULL)
   {
      printf("\n[%d] Element found. %u", temp->data,temp);
      printf("\n");
   }
   else 
   {
      printf("\n[ x ] Element not found (%d).\n", i);
   }
           
   printf("\nPreorder traversal: ");
   pre_order_traversal(root);

   printf("\nInorder traversal: ");
   inorder_traversal(root);

   printf("\nPost order traversal: ");
   post_order_traversal(root);

   getch();
   return 0;
}

void insert(int data)
{
   N *tempNode ;
   tempNode= (N*) malloc(sizeof(N));
   N *current;
   N *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   if(root == NULL)
  {
      root = tempNode;
   } 
   else 
   {
      current = root;
      parent = NULL;
      while(1) 
      { 
         parent = current;  
         if(data < parent->data)
         {
            current = current->leftChild;                
            if(current == NULL) 
            {
               parent->leftChild = tempNode;
               return;
            }
         }  
         else
         {
            current = current->rightChild;
            if(current == NULL) 
            {
               parent->rightChild = tempNode;
               return;
            }
         }
      }            
   }
}

N* search(int data)
{
   N *current = root;
   printf("Visiting elements: ");

   while(current->data != data)
   {
      if(current != NULL)
         printf("%d ",current->data);

      if(current->data > data)
      {
         current = current->leftChild;
      }
      else
      {                
         current = current->rightChild;
      }

      if(current == NULL) 
      {
         return NULL;
      }
   }
   return current;
}

int search1(int data)
{
   N *current = root;
   printf("Visiting elements: ");

   while(current->data != data)
   {
      if(current != NULL)
         printf("%d ",current->data);

      if(current->data > data)
      {
         current = current->leftChild;
      }
      else
      {                
         current = current->rightChild;
      }

      if(current == NULL) 
      {
         return 0;
      }
   }
   return 1;
}

void pre_order_traversal(N* root)
{
   if(root != NULL)
   {
      printf("%d ",root->data);
      pre_order_traversal(root->leftChild);
      pre_order_traversal(root->rightChild);
   }
}

void inorder_traversal(N* root)
{
   if(root != NULL)
   {
      inorder_traversal(root->leftChild);
      printf("%d ",root->data);          
      inorder_traversal(root->rightChild);
   }
}

void post_order_traversal(N* root)
{
   if(root != NULL)
   {
      post_order_traversal(root->leftChild);
      post_order_traversal(root->rightChild);
      printf("%d ", root->data);
   }
}
