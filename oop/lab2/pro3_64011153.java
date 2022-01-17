package oop.lab2;

import java.util.Scanner;

public class pro3_64011153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] week = {"Saturday","Sunday","Monday","Tuesday","Thursday","Friday"};
        System.out.print("Enter a year : ");
        int year = input.nextInt();
        System.out.print("Enter a month : ");
        int month = input.nextInt();
        System.out.print("Enter a day of the month : ");
        int day = input.nextInt();
        int dayweek,yearcentury = year % 100,century = year / 100;
        if(month==1){month=13;}
        else if(month==2){month=14;}
        dayweek = (day + 26*(month+1)/10 + yearcentury/4 + century/4 + 5*century) % 7;
        System.out.print("The name of the day of the week is " + week[dayweek]);
        input.close();
    }
}
