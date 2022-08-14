#include <iostream>
#include "Bst.h"
using namespace std;
 
BST::BST()
{
 root=NULL;
 
}
 
 
void BST::insert(string data)
{
node* add= new node;
add->data=data;
add->left= NULL;
add->right= NULL;
add->counter=1;
node* prev= NULL;
 
if (root==NULL )
{
 root=add;
return;
// check here if the data already exist
}
node* temp=root;
if(data==temp->data)
 {
   temp->counter++;
   return;
 }
 
if (data<temp->data)
{
 prev= temp;
 temp= temp->left;
 
}
else
{
 prev= temp;
 temp=temp->right;
}
while (temp !=NULL)
{
 prev= temp;
 if(data==temp->data)
 {
   temp->counter++;
   return;
 }
 if (data<temp->data)
 {
   temp=temp->left;
 }
 else
 {
   temp=temp->right;
 }
}
if (data<prev->data)
{
 prev->left=add;
}
else
{
prev->right=add;
}
}
 
void BST::print( )
{
 
 printHelp( root );
 cout << endl; // Moves to next line when complete
}
 
 
void BST:: printHelp(node* root)
{
 node* temp= root;
  if ( temp != NULL )
 {
   printHelp( temp->left);
   cout << temp->data << " "<< temp->counter<< endl;
  
   printHelp( temp->right);
 
 }
 
 }
 
int BST:: totalHelp(node* root)
 {
   if(root == NULL)
   {
       return 0;
   }
   else{
       return root->counter + totalHelp(root->left) + totalHelp(root->right);
   }
 }
 
void BST:: distinct()
{
 int distinct=0;
 distinct= distinctHelp(root);
 cout<<"distinct is : "<<distinct<<endl;
}
int BST:: distinctHelp(node* root)
 {
   if(root == NULL)
   {
       return 0;
   }
   else{
       return 1  + distinctHelp(root->left) + distinctHelp(root->right);
   }
 }
 
void BST:: total()
{
 int total=0;
 total= totalHelp(root);
 cout<<"total is : "<<total<<endl;
}
