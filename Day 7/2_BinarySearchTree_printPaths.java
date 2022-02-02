//Printing all root-to-leaf paths, one per line for a binary search tree 
public class BST {
    public BST root;
    public int data;
    public BST leftChild;
    public BST rightChild;
    public int pathNum=1;

    BST()
    {
        root=null;
    }
    public void insertData(int d) //inserting nodes in the BST
    {
        BST newNode=new BST();
        newNode.data=d;
        if(root==null) //if this is the first node to be inserted
            root=newNode;
        else
        {
            BST current=root;
            BST parent; //keeping track of previous node
            while(true)
            {
                parent=current;
                if(d<current.data) //if node to be inserted is smaller than current node
                {
                    current=current.leftChild;
                    if(current==null) //end of BST reached
                    {
                        parent.leftChild=newNode; //attaching new node to the appropriate leaf node
                        return;
                    }
                }
                else //if node to be inserted is larger than current node
                {
                    current=current.rightChild;
                    if(current==null) //end of BST reached
                    {
                        parent.rightChild=newNode; //attaching new node to the appropriate leaf node
                        return;
                    }
                }
            }
        }
    }

    public void displayPath()
    {
        int[] pathArray= new int[100]; //initializing an array of size 100 to store data of nodes path wise
        findPath(root,pathArray,0);
    }

    public void findPath(BST current, int[] pathArray, int index) //recursive function
    {
        if(current==null) //end of BST reached
            return;
        pathArray[index]=current.data; //storing data of nodes in path array one by one
        index++;

        if(current.leftChild==null && current.rightChild==null) //when data of all nodes in one path is stored  
        {
            System.out.print("Path "+pathNum+"-> ");
            printPathArray(pathArray,index); //calling another function to print the path wise array
            pathNum++;
        }
        else
        {
            findPath(current.leftChild, pathArray, index); //storing node data of BST in both directions to cover every possible path from left to right
            findPath(current.rightChild, pathArray, index);
        }
    }

    public void printPathArray(int[] pathArray, int index)
    {
        for(int i=0;i<index;i++) //printing each path
        {
            System.out.print(pathArray[i]+"  ");
        }
        System.out.println();
    }

    public static void main(String args[])
    {
        BST b1=new BST();
        b1.insertData(30);
        b1.insertData(15);
        b1.insertData(50);
        b1.insertData(7);
        b1.insertData(25);
        b1.insertData(20);
        b1.insertData(23);
        b1.insertData(3);
        b1.insertData(9);
        b1.insertData(80);
        b1.insertData(47);
        b1.insertData(97);
        b1.insertData(72);
        b1.insertData(100);
        b1.insertData(93);
        b1.insertData(1);
        b1.insertData(5);
        b1.insertData(6);

        b1.displayPath(); 
    }
}
