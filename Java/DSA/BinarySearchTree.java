import java.util.Scanner;
import java.lang.Exception;
public class BinarySearchTree {
    public static void main(String[] args) {
        BST b = new BST();
        b.inOrder();
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the size for insert data in the Tree");
        int n = input.nextInt();
        for(int i =0;i<n;i++){
            int treedata = input.nextInt();
            b.insert(treedata);
        }
        input.close();
        System.out.println("The PreOrder Traversal of Tree is : ");
        b.inOrder();
    }
}
class Node{
    public Node left;
    public int item;
    public Node right;
}
class BST{
    private Node root;
    public BST(){
        this.root = null;
    }
    public void insert(int data){
        Node temp;
        Node n = new Node();
        n.left = null;
        n.item = data;
        n.right = null;
        if(root==null){
            root = n;
        }
        else{
            temp = root;
            while(temp.item!=n.item){
                if(n.item<temp.item){
                    if(temp.left!=null){
                        temp = temp.left;
                    }
                    else{
                        temp.left = n;
                    }
                }
                else{
                    if(temp.right!=null){
                        temp = temp.right;
                    }
                    else{
                        temp.right = n;
                    }
                }
            }
            if(temp.item==n.item){
                n = null;
            }
        }
    }
    private void inorderTraversal(Node ptr){
        try {
            if(ptr!=null){
                inorderTraversal(ptr.left);
                System.out.print(ptr.item+" ");
                inorderTraversal(ptr.right);
            }
            if(ptr==null){
                throw null;
            }
        } catch (Exception e) {
            System.out.println("Tree is Empty");
        }
    }
    public void inOrder(){
        inorderTraversal(root);
    }
    private void preorderTraversal(Node temp){
        try {
            if(temp!=null){
                System.out.print(temp.item+" ");
                preorderTraversal(temp.left);
                preorderTraversal(temp.right);
            }
            if(temp==null){
                throw null;
            }
        } catch (Exception e) {
            System.out.println("Tree is Empty");
        }
    }
    public void preOrder(){
        preorderTraversal(root);
    }
    private void postorderTraversal(Node ptr){
        try {
            if(ptr!=null){
                postorderTraversal(ptr.left);
                postorderTraversal(ptr.right);
                System.out.print(ptr.item+" ");
            }
            if(ptr==null){
                throw null;
            }
        } catch (Exception e) {
            System.out.println("Tree is Empty");
        }
    }
    public void postOrder(){
        postorderTraversal(root);
    }
}