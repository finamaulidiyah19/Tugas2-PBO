import java.util.Scanner;
public class DERET {
	int a, b, n;
	Scanner scan = new Scanner(System.in);
	
	DERET(){
		System.out.print("------------------------------------\n");
		System.out.print("Nama  : Fina Maulidiyah N\n");
		System.out.print("NIM   : 19051397034\n");
		System.out.print("Prodi : D4 Manajemen Informatika 19A\n");
		System.out.print("------------------------------------\n");
		System.out.print("Nilai Awal: ");
		a = scan.nextInt();
		System.lineSeparator();
		
		System.out.print("Beda: ");
		b = scan.nextInt();
		System.lineSeparator();
		
		System.out.print("Jumlah Deret: ");
		n = scan.nextInt();
		System.lineSeparator();		
	}
	
	void arithPro() {
		int temp;
		temp = a;
		for(int i = 1; i <= n; i++) {
			System.out.print(temp + " ");
			temp = temp + b;
		}
	}
	
	
	public static void main(String[] args) {
		DERET obj = new DERET();
		obj.arithPro();

	}

}