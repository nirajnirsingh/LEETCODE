// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {

        if(root == NULL) return "null,";

        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(queue<string>&nodes) {
         string val = nodes.front();
         nodes.pop();

         if(val == "null") return NULL;

         TreeNode* root = new TreeNode(stoi(val));
         root-> left = deserialize(nodes);
         root-> right = deserialize(nodes);
         //deserialize(nodes);

         return root;

    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        queue<string>nodes;
        string val;

        while(getline(ss,val,',')) {
            nodes.push(val);
        }
        return deserialize(nodes);
    }
};

// // Your Codec object will be instantiated and called as such:
// // Codec ser, deser;
// // TreeNode* ans = deser.deserialize(ser.serialize(root));



