
    // This function returns the maximum sum of paths starting
    // from the given node and updates the overall maximum path sum.
int findMaxPathSum(TreeNode* node, int &sum) 
{
        if (node == nullptr) 
            return 0;

        int leftMax  = max(0, findMaxPathSum(node->left,  sum)); 
        int rightMax = max(0, findMaxPathSum(node->right, sum));

        int currentValue = node->val;
        sum = max(sum, leftMax + rightMax + currentValue);
        return max(leftMax, rightMax) + currentValue; 
}

int maxPathSum(TreeNode* root)        // this is our main function !
{
        int sum = INT_MIN;  
        findMaxPathSum(root, sum);    // recursively calling the above function and update the maximum path sum !
        return sum;  
}