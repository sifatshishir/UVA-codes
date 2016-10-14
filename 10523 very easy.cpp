package work;
import java.math.BigInteger;
import java.util.*;
public class Work {

        public static void main(String[] args)
        {

            Scanner sc = new Scanner(System.in);
            int N, A;
            while(sc.hasNextInt())
            {
                N = sc.nextInt();
                A = sc.nextInt();

                BigInteger sum = new BigInteger("0"),
                x = BigInteger.valueOf(A);

                for(int i = 1; i <= N; i++)
                sum = sum.add(BigInteger.valueOf(i).multiply(x.pow(i)));

            System.out.println(sum);
            }
        }
    }
