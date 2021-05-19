class Stacks{
    int topmost = 0;
    int arr1[] = new int[5];

    void pushing(int x){
        arr1[topmost] = x;
        topmost++;
    }

    void popping(){
        --topmost;
    }

    void printing(){
        for(int i  = 0; i < topmost; i++){
            System.out.println(arr1[i]);
        }
    }
}

class stack{
    public static void main(String args[]){
        Stacks s1 = new Stacks();
        s1.pushing(5);
        s1.pushing(4);
        s1.pushing(3);
        s1.popping();
        s1.popping();
        s1.printing();
    }
}