import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static boolean checkEven(int n){
        if (n%2 == 0){
            return true;
        }
        else{
            return false;        }
    }

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        boolean temp = checkEven(N);
        if (!temp){
        System.out.println("Weird");
        }
        else{
            if (N > 1 && N < 6){
                System.out.println("Not Weird");
            }
            else if (N > 5 && N <= 20){
                System.out.println("Weird");
            }
            else{
                System.out.println("Not Weird");
            }
        }
        scanner.close();
    }


}
