import java.io.IOException;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        String s1 = "---------------------------------------";
        String s2 = "|                                     |";
        String s3 = "|x = 35                               |";
        
        String s4 = "|               x = 35                |";
        String s5 = "|                               x = 35|";
        
        for(int i = 0;i<7;i++){
            if(i==0 || i==6){
                System.out.println(s1);
            }
            else if(i==2 || i==4){
                System.out.println(s2);
            }
            else if(i==1){
                System.out.println(s3);
            }
            else if(i==3){
                System.out.println(s4);
            }
            else if(i==5){
                System.out.println(s5);
            }
            
        }

    }
 
}
