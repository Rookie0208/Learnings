package javaInOneVideo;

import java.util.Scanner;

public class FirstJavaClass {
//	METHODS
//	methods will be written inside the public class or outside the main class.
//	methods need to be called by the functions inside the main class.
//	returnType functionName(argument) {}
//	static int average (int firstNumber, int secondNumber) {
//		int sum = firstNumber + secondNumber;
//		return sum/2;
//	}

	public static void main(String[] args) {
//		static objects ka class nhi banana padta
//	System.out.println("This will going to be the one lecture for whole java");
//	System.out.println();  // this will create a line space
//	
//	System.out.println(average(3,4));
	
// Begin with some data types:-
//	 int name = 05;
//	 float name2 = 03.05f;
//	 long name3 = 45687983116l;
//	 boolean isValid = true;
//	 String name4 = "Amit";
//	 char name5 = 'A';
	 
//	  Begin with Arithmatic operators:-
	 
//	 int number1 = 1234;
//	 int number2 = 5678;
	 
//	 int sum = number1 + number2;
//	 System.out.println(sum);
//	 
//	 int subtract = number1 - number2;
//	 System.out.println(subtract);
//	 
//	 int multiplication = number1 * number2;
//	 System.out.println(multiplication);
//	 
////	 THIS IS TYPE CASTING.
//	 double divide = (double)number1 / (double)number2;
//	 System.out.println(divide);
//	 
//	 int modulus = number1 % number2;
//	 System.out.println(modulus);
//	 
//	 int increment1 = number1++;
//	 int increment = ++number1;
//	this inncrement means simply 
//	 number = number+1; or number++ 
	 
//	 System.out.println(increment1);
//	 System.out.println(increment);
//	
	 
//	TAKING USER INPUT
	
//	Scanner sc = new Scanner(System.in);
//	 HERE SCANNER IS THE CLASS AND ALL THE CLASSES NEED AN OBJECT SO THERE 
//	sc IS THE OBJECT or hum uski functionality ko use kar skte hai.
//	System.out.println("Enter You Age");
//	int age = sc.nextInt();
//	System.out.println("Your age is: " +age);
//	System.out.println("Enter You Name");
//	String name = sc.nextLine();
//	System.out.println("Your name is: " +name);
//	}
	
//	CONDITIONAL STATEMENT
//	 int age = 18;
//	 if (age < 18) {
//		 System.out.println("You Cannot Vote");
//	 } else {
//		 System.out.println("You can vote");
//	 }
//	 BOOLEAN EXAMPLE
//	 System.out.println(19<18);
	
//	ELSE IF CONDITION
//	char grade = 'A';
//	if(grade=='A') {
//		System.out.println("Your grade is very good");
//	} else if (grade=='B') {
//		System.out.println("Very good, keep learning");
//	} else if (grade =='C') {
//		System.out.println("Keep improving"); 
//	} else {
//		System.out.println("invalid grade");
//	}
	
//	TO IMPROVE THE IF ELSE EFFICIENCY, WE HAVE SWITCH CASE.
//	char grade = 'C';
//	switch(grade) {
//	case 'A' :
//		System.out.println("Your grade is very good");
//		break;
//	case 'B' :
//		System.out.println("Very good, keep learning");
//		break;
//	case 'C' :
//		System.out.println("Keep improving"); 
//		break;
//		default :
//			System.out.println("invalid grade");			
//	}
	
//	LOGICAL OPERATOR
//	int age = 19;
//	if(!(age >18)) {
//		System.out.println("YOU CAN VOTE");
//	}else {
//		System.out.println("you can not vote");
//	}
	
//	LOOPS
//	For loop
//	for(int i = 0; i<=10; i++) {
//		System.out.println(i+ " amit");
//	}
	
//	WHILE LOOP
//	int i = 2;
//	while( i < 10) {
//		i++;
//		if(i==4) continue;
//		System.out.println(+i);
//	}
	
//	DO WHILE LOOP
//	int i = 1;
//	do {
//		System.out.println(+i);
//		i++;
//	}
//	while(i<10);
	
//	ARRAYS
//	int marks[] = new int[5];
//	if we dont't know the size of the array then we have another method
//	int marks[] = {23, 45, 26, 52, 26};
//	marks[0] = 45;
//			marks[1] = 54;
//			marks[2] = 65;
//			marks[3] = 66;
//			marks[4] = 98;
//			System.out.println(marks[4]);
//			to print all the values in one go, we use for loop
//			for(int i = 0; i< marks.length; i++) {
//				System.out.println(marks[i]);
//			}
	
//	2-D ARRAY
//	int array[][] = new int[2][3];
//	OR
//	int array[][] = {
//			{ 2,3},
//			{4,5},
//			{5,6}
//	};
//	System.out.println(array[0][0]);
	
//		INDEX OUT OF BOUND EXCEPTION
		int a[] = new int[3];
		try {
		System.out.println(2/0);
		} catch (Exception e) {
			System.out.println("Error aaya tha");
			System.out.println(e.getLocalizedMessage());
		} System.out.println("Try with other number");
		

	}
}
