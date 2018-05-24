import java.util.Scanner;
public class Main{
     public static void main(String []args){
        int cnt = 0;
        Scanner INPUT = new Scanner(System.in);
        while(INPUT.hasNextLine()){
            String input =  INPUT.nextLine();
            for(int i = 0; i < input.length(); i++){
                if(input.charAt(i) == '\"'){
                    if(++cnt % 2 == 1) System.out.print("``");
                    else System.out.print("''");
                }else System.out.print(input.charAt(i));   
            }
            System.out.println();
        }
     }
}
