//package Java.Problem;
import java.util.Scanner;
public class Fibonaachi {
    public static int fibbonachi(int n)
{
    /*if(n<=1){
        return n;
    }
    else{
        return fibbonachi(n-1) + fibbonachi(n-2);
    }
    */
    int a =0 ,b =1;
    int lastdigit=0;
    if(n<=0){
        return n;
    }
    if(n==1){
        return 1;
    }
    for(int i =2;i<=n;i++){
        lastdigit = (a+b)%10;
        a  = b;
        b = lastdigit;
    }
    return lastdigit;
}
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        input.close();
        System.out.println(fibbonachi(N));
    }
}

