package oop.lab1;

import java.util.Scanner;

public class pro3_64011153 {
    public static void main(String[] args) { 
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number between 0 and 1000 : ");
        int num = input.nextInt();
        input.close();
        int three,two,one,answer ;
        one = num % 10;
        two = (num / 10)%10;
        three = num / 100;
        answer = one+two+three;

        System.out.println("The sum of the digits is " + answer);
    }
}
