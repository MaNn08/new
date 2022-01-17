package oop.lab2;

import java.util.Scanner;

public class pro4_64011153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] name = { " ", " ", " " };
        System.out.print("Enter the first city: ");
        name[0] = input.nextLine();
        System.out.print("Enter the second city: ");
        name[1] = input.nextLine();
        System.out.print("Enter the third city: ");
        name[2] = input.nextLine();
        String temp;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (name[i].compareTo(name[j]) > 0) {
                    temp = name[i];
                    name[i] = name[j];
                    name[j] = temp;
                }
            }
        }
        System.out.println("The three cities in alphabetical order are " + name[0] + " " + name[1] + " " + name[2]);
        input.close();
    }
}
