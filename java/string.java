import java.util.*;
public class string{
    public static void main(String []args){
        String s;
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        int x = s.length();
        int mid=x/2;
        mid--;
        String q = "";
        while(mid>=0){
            q=q+s.charAt(mid);
            mid--;
        }
        mid=x/2;
        x--;
        while(x>=mid){
            q=q+s.charAt(x);
            x--;
        }
        System.out.println(q);
        sc.close();
    }
}