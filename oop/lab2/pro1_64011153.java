package oop.lab2;

import java.util.Scanner;

public class pro1_64011153 {
    public static void main(String[] args) {
        String[] week = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        Scanner input = new Scanner(System.in);
        System.out.print("Enter today's day : ");
        int today = input.nextInt();
        System.out.print("Enter the number of days elapsed since today : ");
        int nextday = input.nextInt();
        int futureday = (today + nextday) % 7;
        System.out.println("Today is " + week[today] + " and the future day is " + week[futureday]);
        input.close();
    }
}
