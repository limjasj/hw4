#include "equal-paths.h"
using namespace std;

/**
 * @brief Returns true if all paths from leaves to root are the same length (height),
 *        and false otherwise
 *
 *        Note: this doesn't mean we are checking if the tree is full, but just that
 *        any leaf node (wherever it may exist) has the same length path to the root 
 *        as all others.
 * 
 * @param root Pointer to the root of the tree to check for equal paths
 */
// You may add any prototypes of helper functions here


int heightOfPath(Node * root)
{
  if(root==nullptr) return 0;

  int left=	heightOfPath(root->left); //will recurse on left and right side
	int right= heightOfPath(root->right);

	if(left==-1 || right==-1) return -1;
	if((left-right)!=0 && left!=0 && right!=0) return -1;

	if(root->left != nullptr)
	{
		return left+1;
	}
	if(root->right != nullptr)
	{
		return right+1;
	}
	return 1;

}

bool equalPaths(Node * root)
{
    // Add your code below
    return (heightOfPath(root)!=-1);
    
}
