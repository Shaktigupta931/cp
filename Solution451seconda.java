import java.util.Scanner;

public class Solution451seconda {
    public static void main(String args[]) {
        Scanner n = new Scanner(System.in);
        int v =Integer.parseInt(n.next());
          int q=0;
        int h =Integer.parseInt(n.next());
        for(int i=0;i<v;i++){
            for(int j=0;j<h;j++){
                if(i==j){
                    q++;
                }
            }
        }
        if (q % 2 == 0) {
            System.out.println("Malvika");
        } else {
            System.out.println("Akshat");
        }


    }

}
