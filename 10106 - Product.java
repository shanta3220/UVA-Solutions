import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;


public class Main{
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    while(sc.hasNext()){
	        BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            System.out.println(a.multiply(b));
	    }
	}
}
