class Nodes{
    int key;
    Nodes left, right;

    public Nodes(int item){
        key = item;
        left = right = null;
    }
}

class binarytree{
    Nodes root;

    binarytree(int key){
        root = new Nodes(key);
    }
    binarytree(){
        root = null;
    }
    public static void main(String[] Args){
        binarytree tree = new binarytree();
        tree.root = new Nodes(3);
        tree.root.left = new Nodes(4);
        tree.root.right = new Nodes(5);
    }
};