// class Solution{
//     public:
//     //Function to find the height of a binary tree.
//     int max_h = 0;
//     int solve(struct Node* node, int h){
//          if(node->right == NULL && node->left == NULL)return max_h = max(max_h, h);
         
//          else if(node->right == NULL){
//             solve(node->left, h+1);
//         } 
//         else if(node->left == NULL){
//             solve(node->right, h+1);
//         } 
//         else{
//             solve(node->right, h+1);
//             solve(node->left, h+1);
//         }
//     }
//     int height(struct Node* node){
//         if(!node)return 0;
        
//         max_h = solve(node, 1);
//         return max_h;
//     }
// };