import java.util.Scanner;
import java.math.BigInteger;

class Julka {
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
  BigInteger two = new BigInteger("2");
  for (int i = 0; i < 10; i++) {
   String t = sc.next();
   String d = sc.next();
   BigInteger tot = new BigInteger(t);
   BigInteger diff = new BigInteger(d);
   BigInteger k, n;
   k = (tot.add(diff)).divide(two);
   n = tot.subtract(k);
   System.out.println(k);
   System.out.println(n);
  }
 }
}