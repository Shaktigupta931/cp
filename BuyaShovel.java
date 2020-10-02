import java.util.Scanner;

public class BuyaShovel {

	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		
		int k = in.nextInt();
		int r = in.nextInt();
		int an=-1;
		if(k%10==0||k%10==r) {
			an=1;
		}else if(k%10==5&&k>10) {
			an=2;
		}else {
			int[] ar = new int[10];
			int i;
			int d = k%10;
			
			for(i=1;i<10;i++) {
				int n = i*d;
				int cn = n;
				ar[i]=cn%10;
				if(ar[i]==r||ar[i]==0) {
					an=i;
					break;
				}
			}
			
		}
		if(an==-1)
			System.out.println(10);
		else
			System.out.println(an);
		
		
	}
	
}
