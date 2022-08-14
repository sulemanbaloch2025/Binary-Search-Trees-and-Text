#include <string>
using namespace std;
 
struct node{
 string data;
 int counter;
 node* left;
 node* right;
};
 
class BST
{
 private:
 node* root;
 void printHelp(node* root);
 int totalHelp(node* root);
 int distinctHelp(node* root);
 public:
 BST();
 void insert(string data);
 void total();
 void print();
 void distinct();
};
