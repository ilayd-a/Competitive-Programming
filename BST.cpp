//binary search tree
#include <iostream>
using namespace std;

struct Node{
    int val;
    Node *left = NULL;
    Node *right = NULL;
};

void ekle(Node *curr, int v){
    if(curr == NULL){
        curr = new Node();
        curr -> val = v;
        return;
    }
    ekle(curr -> right, v);
    if(curr -> val < v){
        if(curr-> right == NULL){
            curr -> right = new Node();
            curr -> right -> val = v;
            return;
        }
    }
    else{
        if(curr -> left == NULL){
        curr -> left = new Node();
        curr -> left -> val =v;
        return;
    }
        ekle(curr->left, v);
    }
    return;
}
int sorgu(Node *curr, int searchValue){
    if(curr==NULL) return 0;
    else if(curr->val == searchValue) return 1;
    else if(curr->val < searchValue) return sorgu(curr->right, searchValue);
    else return sorgu(curr->left, searchValue);
}
int main() {
    Node *root= new Node();
    root -> val = 5;
    ekle(root,3);
    ekle(root,7);
    ekle(root, 6);
    cout << sorgu(root, 7) << endl;
    cout << sorgu(root, 3) << endl;
    cout << sorgu(root, 8) << endl;

}
