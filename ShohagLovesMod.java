import java.util.*;
 
public class ShohagLovesMod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
 
        while (t-- > 0) {
            int n = sc.nextInt();
 
            int num = 1;
            while (n-- > 0) {
                System.out.print(num + " ");
                num += 2;
            }
 
            System.out.println();
        }
 
        sc.close();
    }
}
