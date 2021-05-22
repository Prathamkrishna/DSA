class linkedlist{
    Node head;
    static class Node {
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }

    public void printList(){
        Node n = head;
        while(n!=null){
            System.out.print(n.data + " ");
            n = n.next;
        }
    }
    public static void main(String args[]){
        linkedlist llist = new linkedlist();

        llist.head = new Node(2);
        Node second = new Node(4);
        Node third = new Node(6);

        llist.head.next = second;
        second.next = third;

        llist.printList();
    }
}