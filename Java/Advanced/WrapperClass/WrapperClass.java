package WrapperClass;
import java.io.PrintStream;
import java.util.*;
public class WrapperClass {
    public static void main(String[] args) {
        // Declaring of Primitive Data Type
        int x = 4;
        float y = 9.42f;
        long z = 6000;
        Integer intObject = x;
        Float floatObject = y;
        Long longObject = z;
        Float wrapInt = Float.valueOf(y);
        int infvalue  = wrapInt.intValue();
        System.out.println(infvalue);
        System.out.println(intObject); 
        System.out.println(floatObject);
        System.out.println(longObject);
        // convert binary number to integers number;
        Integer binToint = Integer.valueOf("10101", 2);
        System.out.println(binToint);
    }
}
