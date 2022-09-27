package practiseSets;

import java.util.Random;
import java.util.Scanner;

public class Game {

	private static Scanner sc;

	public static void main(String[] args) {
		// MAKE A STONE PAPER SECISSOR GAME
		
		// 0 for stone
		// 1 for paper
		// 2 for secissor
		
		sc = new Scanner(System.in);
		System.out.println("Enter Your number");
		System.out.println("0 for stone");
		System.out.println("1 for paper");
		System.out.println("2 for secissor");
		int userInput = sc.nextInt();
		
		Random randomNum = new Random();
		int computerInput = randomNum.nextInt(3);
		
		if(userInput == 0 && computerInput == 2 || userInput == 1 && computerInput == 0 || userInput == 2 && computerInput == 1) {
			System.out.println("yeahh.. You Won");
		}
		else if(userInput == computerInput) {
			System.out.println("It's a draw");
		}
		else {
			System.out.println("Computer wins");
		}
		System.out.println("computer plays: " +computerInput);

	}

}
