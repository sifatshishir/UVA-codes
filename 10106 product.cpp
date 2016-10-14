package work;
import java.math.BigInteger;
import java.util.*;
public class Work {

        public static void main(String[] args)
        {

            Scanner sc = new Scanner(System.in);


            while(sc.hasNext())
            {

            BigInteger x = sc.nextBigInteger();
            BigInteger y = sc.nextBigInteger();

            System.out.println(x.multiply(y));
            }
        }
    }
