
#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int id;
    int value;
    node* Left;
    node* Right;
    node* parent;
};

class BinaryTree
{
public:
    node* root;

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNote(int id, int value)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Insertion(int id, int value)
    {
        node* newnode = CreateNewNote(id, value);
        if(root == NULL)
        {
            root = newnode;
            return;
        }

        queue<node*> q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->Left != NULL)
            {
                q.push(a->Left);
            }
            else
            {
                a->Left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->Right != NULL)
            {
                q.push(a->Right);
            }
            else
            {
                a->Right = newnode;
                newnode->parent = a;
                return;
            }

        }

    }

    void BFS()
    {
        if(root == NULL)
            return;
        queue<node*> q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();

            int p = -1, l = -1, r = -1;
            if(a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if(a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout<<"Node id = "<<a->id<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Parent id = "<<p<<endl;

        }
    }

    void DFS(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);
    }

    void Inorder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        Inorder(a->Left);
        cout<<a->id<<" ";
        Inorder(a->Right);
    }

    void Preorder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        Preorder(a->Left);
        Preorder(a->Right);
    }

    void PostOrder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        Preorder(a->Left);
        Preorder(a->Right);
        cout<<a->id<<" ";
    }

    void Search(node* a, int value){
        if(a == NULL){
            return;
        }
        if(a->value == value){
            cout<<a->id<<" ";
        }
        Search(a->Left, value);
        Search(a->Right, value);
    }

};

int main()
{
    BinaryTree bt;
    bt.Insertion(0,5);
    bt.Insertion(1,10);
    bt.Insertion(2,10);
    bt.Insertion(3,9);
    bt.Insertion(4,8);
    bt.Insertion(5,5);
    bt.Insertion(6,7);

    bt.BFS();
    cout<<endl;

    bt.Search(bt.root,5);
    cout<<endl;
    bt.Search(bt.root,10);

//    bt.build_binary_tree();
////    bt.Preorder
//    bt.PostOrder(bt.root);
////    bt.BFS();
////    bt.build_binary_tree();
////    bt.print_tree_info();

    return 0;
}


//    void build_binary_tree()
//    {
//        node* allnode[6];
//        for(int i = 0; i<6; i++)
//        {
//            allnode[i] = CreateNewNote(i);
//        }
//
//        allnode[0]->Left = allnode[1];
//        allnode[0]->Right = allnode[2];
//
//        allnode[1]->Left = allnode[5];
//        allnode[1]->parent = allnode[0];
//
//        allnode[2]->Left = allnode[3];
//        allnode[2]->Right = allnode[4];
//        allnode[2]->parent = allnode[0];
//
//        allnode[5]->parent = allnode[1];
//
//        allnode[3]->parent = allnode[2];
//        allnode[4]->parent = allnode[2];
//        root = allnode[0];
//    }

//    void print_tree_info(){
//        for(int i = 0; i<6; i++){
//            int p = -1;
//            int l = -1;
//            int r = -1;
//
//            if(allnode[i]->parent != NULL){
//                p = allnode[i]->parent->id;
//            }
//
//            if(allnode[i]->Left != NULL){
//                l = allnode[i]->Left->id;
//            }
//
//            if(allnode[i]->Right != NULL){
//                r = allnode[i]->Right->id;
//            }
//
//            cout<<"Node "<<i<<" : Parent = "<<p<<" , Left child = "<<l<<" , Right child = "<<r<<endl;
//        }
//    }
//    }
