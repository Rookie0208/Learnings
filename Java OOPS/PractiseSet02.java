package practiseSets;

import java.util.Scanner;

public class PractiseSet02 {
private static Scanner sc;

public static void main(String args[]) {

//	WAP to find the percentage of a student of 5 subject
	
	
	sc = new Scanner(System.in);
	System.out.println("Enter the no. of subjects");
	int n = sc.nextInt();
	int marks[] = new int[n];
	
	System.out.println("Enter the marks of the student");
	for( int i = 0 ; i<n; i++) {
		 marks[i] = sc.nextInt();		
	}
	
	int sum = 0 ;
	for(int i = 0; i<n; i++) {
		sum += marks[i];
	}
	
		float total = n*100;
	
	int averageMarks = sum/n;
	System.out.println("the average marks of the student is : " +averageMarks);
	
//		TO FIND THE PERCENTAGE
//	% = no. obtained/total marks * 100
	
	float percent = ( sum/total ) * 100;
	System.out.println("the percentage of the student is :" +percent+ " %");
	
}
}
