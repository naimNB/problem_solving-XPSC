#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int val;
        Node* left;
        Node* right;
    
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* binary_tree(){
    int val; cin >>  val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);


    queue<Node*> q;

    if(root) q.push(root);

    while(!q.empty()){
        Node* par = q.front();
        q.pop();

        int l,r; cin >> l >> r;
        Node* m_left, *m_right;

        if(l==-1) m_left = NULL;
        else m_left = new Node(l);

        if(r == -1) m_right = NULL;
        else m_right = new Node(r);

        par->left = m_left;
        par->right = m_right;

        if(par->left) q.push(par->left);
        if(par->right) q.push(par->right);
    }
    return root;

}
int main(){

}