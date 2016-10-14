package work;
import java.math.BigInteger;
import java.util.*;
public class Work {

        public static void main(String[] args)
        {

            BigInteger sum;

            Scanner sc = new Scanner(System.in);


            while(sc.hasNext())
            {

            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if(a==1)
            {
                System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) is not an integer with less than 100 digits.");
                continue;
            }
            else if(b==c)
            {
                System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) 1");
                continue;
            }
            else if(b%c!=0||b<c)
            {
                System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) is not an integer with less than 100 digits.");
                continue;
            }
            if( (b - c) * Math.log10(a) > 99)
            {
                System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) is not an integer with less than 100 digits.");
                continue;
            }
            sum=((BigInteger.valueOf(a)).pow(b)).subtract(BigInteger.ONE).divide(((BigInteger.valueOf(a)).pow(c)).subtract(BigInteger.ONE));

            System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) "+sum);
            }
        }
}
