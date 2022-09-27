package practiseSets;

public class PractiseSet01 {

	public static void main(String[] args) {
		
//		PROBLEM 1
//		convert the string into the lower case 
		
		String name = "AMIT SINGH RAWAT";
		name = name.toLowerCase();
		System.out.println(name);
		
//		PROBLEM 2
//		remove the white spaces from an string with underscore
		
		String name1 = "My name is amit singh rawat";
		name1 = name1.replace(" ", "_");
		System.out.println(name1);

//		PROBLEM 3
//		replace the name from the string to a real name
		
		
		String letter = "Dear, <|name|> Hope you are doing great!";
		letter = letter.replace("<|name|>", "Amit");
		System.out.println(letter);
		
//		PROBLEM 4
//		printing the index of double and tripple spaces
		
		String text = " this is a sentence full of  double and   tripple spaces";
		System.out.println(text.indexOf("  "));
		System.out.println(text.indexOf("   "));
		
//		PROBLEM 5
//		formatting the letter
		
		String myLetter = " hey! Amit,\n\t You are great.\n\t You are doing best.\n \t Hope for your best.";
		System.out.println(myLetter);
	}

}
