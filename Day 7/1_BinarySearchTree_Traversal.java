//Printing all root-to-leaf paths, one per line for a binary search tree 
public class BST 
{
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
    public void preOrder(BST localRoot) //root - left - right 
    {
        if(localRoot != null)
        {
           System.out.print(localRoot.data + " ");
           preOrder(localRoot.leftChild);
           preOrder(localRoot.rightChild);
        }
    }
    public void inOrder(BST localRoot) //left - root - right
    {
        if(localRoot != null)
        {
           inOrder(localRoot.leftChild);
           System.out.print(localRoot.data + " ");
           inOrder(localRoot.rightChild);
        }
    }
    public void postOrder(BST localRoot) //left - right - root
    {
        if(localRoot != null)
        {
           postOrder(localRoot.leftChild);
           postOrder(localRoot.rightChild);
           System.out.print(localRoot.data + " ");
        }
    }
    public void traverse(int traverseType)
    {
        switch(traverseType)
        {
            case 1: 
            {
                System.out.print("\nPre-order traversal: ");
                preOrder(root);
                break;
            }
            case 2:
            { 
                System.out.print("\nIn-order traversal:  ");
                inOrder(root);
                break;
            }      
            case 3:
            {
                System.out.print("\nPost-order traversal: ");
                postOrder(root);
                break;
            }
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
        b1.traverse(1);
        b1.traverse(2);
        b1.traverse(3);
    }
}
