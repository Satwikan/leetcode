/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    // Time Complexity: O(V+E)
    Node* dfs (Node* root, unordered_map<Node*, Node*>& cloned) {
        Node* clone = new Node(root->val);
        cloned[root] = clone;
        vector<Node*> neighbours;
        for (auto n: root->neighbors) {
            if (cloned.find(n) != cloned.end())
                neighbours.push_back(cloned[n]);
            else
                neighbours.push_back(dfs(n, cloned));
        }
        clone->neighbors = neighbours;
        return clone;
    }
    Node* cloneGraph(Node* node) {
    // we have keeep track of which node have been cloned to which node
        if (node == NULL) return node;
      unordered_map<Node*, Node*> cloned;
      return dfs(node, cloned);
    }
};