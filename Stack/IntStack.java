class IntStack{
    int elStack[];
    int top;

    IntStack(int n){
        elStack = new int[n];
        top = 0 ;

    }
    void push (int n){
        elStack[top] = n;
        top ++;
    }
    void print (){
        for (int i = top-1; i>= 0; i--)
        System.out.println(i+ "|"+ elStack[i]+"|");
    }
}
//tema genericos fila, libro java 