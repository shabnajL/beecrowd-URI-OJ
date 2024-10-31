import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
         Scanner myObj = new Scanner(System.in);
         int N = myObj.nextInt();
         for(int i=1;i<=N;i++){
             int ans = myObj.nextInt();
             System.out.println("resposta "+i+": "+ans);
         }
 
    }
 
}
