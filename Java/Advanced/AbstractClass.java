import java.io.*;
abstract class Shape{
    String objeString = " ";
    Shape(String s){
        this.objeString = s;
    }
    public void moveto(int x, int y){
        System.out.println(this.objeString+" "
                         + " x "+x+" and  y");
    }
    abstract public double area();
    abstract public void draw();
}

class Reactangle extends Shape{
    int lenght,witdh;
    Reactangle (int lenght,int witdh,String name){
        super(name);
        this.lenght = lenght;
        this.witdh = witdh;
    }
    @Override public void draw(){
        System.out.println("Reactangle has been draw");
    }
    @Override public double area(){
        return (double)(lenght*witdh);
    }
}
class Circle extends Shape{
    double pi = 3.14;
    int radius;
    Circle(int radius,String name){
        super(name);
        this.radius = radius;
    }
    @Override public void draw(){
        System.out.println("Circle has been draw");
    }
    @Override public double area(){
        return (double)((pi*radius*radius));
    }
}
// Deriver Program to cheking the code implementation
class AbstractClass{
    public static void main(String[] args) {
        Shape s = new Reactangle(2, 3, "Reactangle");
        System.out.println("Area of reactangle: "+s.area());
        s.moveto(1, 2);
        System.out.println(" ");
    }
}