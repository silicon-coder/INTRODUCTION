#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;
#define null NULL

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = null;
    }
};

class io
{
public:
    vector<int> takeVectorInput(vector<int> vec, int vectorSize)
    {
        for (int index = 0; index < vectorSize; index++)
        {
            int num;
            cin >> num;
            vec.push_back(num);
        }
        return vec;
    }

    void printVector(vector<int> vec)
    {
        for (auto index = vec.begin(); index != vec.end(); index++)
            cout << *index << " ";

        cout << endl;
    }
};

class Solution
{
public:
    void preInPostTraversal(Node *root)
    {
        stack<pair<Node *, int>> st;
        st.push({root, 1});
        vector<int> pre, post, in;

        while (!st.empty())
        {
            auto it = st.top();
            st.pop();
            if (it.second == 1)
            {
                pre.push_back(it.first->data);
                it.second++;
                st.push(it);
                if (it.first->left != null)
                    st.push({it.first->left, 1});
            }
            else if (it.second == 2)
            {
                in.push_back(it.first->data);
                it.second++;
                st.push(it);
                if (it.first->right != null)
                    st.push({it.first->right, 1});
            }
            else
                post.push_back(it.first->data);
        }

        io obIo;

        cout << "Preorder: ";
        obIo.printVector(pre);

        cout << "Postorder: ";
        obIo.printVector(post);

        cout << "Inorder: ";
        obIo.printVector(in);
    }
};

int main()
{
    struct Node *root = new Node(1);

    // left
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    // right
    root->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obSol;
    obSol.preInPostTraversal(root);

    /*
    The Tree will look like
                    1
            2               5
        3       4       6       7
    */
    return 0;
}