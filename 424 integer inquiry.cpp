package work;
import java.math.BigInteger;
import java.util.*;
public class Work {

        public static void main(String[] args)
        {

            BigInteger a;
            BigInteger sum = BigInteger.ZERO;

            Scanner sc = new Scanner(System.in);


            while(sc.hasNext())
            {
                a = sc.nextBigInteger();
                if(a.compareTo(BigInteger.ZERO)==0)
                    break;

                sum=sum.add(a);
            }
            System.out.println(sum);
        }
}

