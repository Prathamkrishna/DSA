class node{
    int key;
    node left, right;
    public node(int item){
        key = item;
        left = right = null;
    }
}

class preorderpostorderinorderbinarytree {
    node root;
    preorderpostorderinorderbinarytree(){
        root = null;
    }
    void printPostorder(node Node){
        if(Node == null) return;

        printPostorder(Node.left);
        printPostorder(Node.right);

        System.out.print(Node.key + " ");
    }
    void printInorder(node Node){
        if(Node == null) return;

        printInorder(Node.left);
        System.out.println(Node.key + " ");
        printInorder(Node.right);
    }
    void printPreorder(node Node){
        if(Node == null) return;

        System.out.println(Node.key + " ");
        printPreorder(Node.left);
        printPreorder(Node.right);
    }

    void printPostorder(){printPostorder(root);}
    void printInorder(){printPostorder(root);}
    void printPreorder(){printPreorder(root);}

    public static void main(String[] Args){
        preorderpostorderinorderbinarytree tree = new preorderpostorderinorderbinarytree();
        tree.root = new node(3);
        tree.root.left = new node(4);
        tree.root.right = new node(5);
        tree.root.left.left = new node(6);
        tree.root.left.right = new node(7);

        tree.printPreorder();
        tree.printInorder();
        tree.printPostorder();
    }
}
