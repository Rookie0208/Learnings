package practiseSets;

import java.util.Scanner;

public class PractiseSet03 {
private static Scanner sc;

public static void main(String args[]) {
	
//	QUESTION: FIND THE GREATEST OF THE THREE NO.
//	5,7,2;
	int a,b,c;
	sc = new Scanner(System.in);
	a = sc.nextInt();
	b = sc.nextInt();
	c = sc.nextInt();
//a=5;
//b=70;
//c=20;
	
//	will make a if else loop to check this 

	if(a>b) {
	if(b>c) {
		System.out.println(" a is greater");
	}else 
			System.out.println(" c is greater");
	}
	if(b>c) {
		if(c>a)
		System.out.println("b is greater");
	}
		else {
			System.out.println("c is greater");
		}
	
	
//  TO FIND WHEATHER  THE GIVEN NUMBER IS even or odd
System.out.println("Enter the no. to find the even or odd");
int d = sc.nextInt();

//boolean isPrime = false;

if(d%2==0) {
//	isPrime = true;
	System.out.println("the given number is a even number");
}else {
	System.out.println("the given number is an odd number");
}
	}
	
}

