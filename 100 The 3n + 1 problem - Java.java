import java.util.Scanner;
class Main{
     public static void main(String []args){
        int max = 0;
        Scanner input = new Scanner(System.in);
        while(input.hasNextInt()){
            int i = input.nextInt(), j = input.nextInt(); 
            System.out.print(i + " " + j + " ");
	    if(i > j){
	    	int temp = i;
	        i = j;
	        j =temp;
	     }
	    
	     for (int a = i; a <= j; a++) if (length(a) >= max) max = length(a);
	     System.out.println(max);
	     max = 0;
	}
     }
     
     public static int length(int n){
        int length = 0;
        while(n > 1){
            length++;
            if(n % 2 == 1) n = 3 * n + 1;
            else n /= 2;
        }
        return length + 1;
     }
}
