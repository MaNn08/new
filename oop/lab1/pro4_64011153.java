package oop.lab1;

import java.util.Scanner;

public class pro4_64011153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter weight in pounds: ");
        double wei = input.nextDouble();
        System.out.print("Enter height in inches: ");
        double hei = input.nextDouble();
        input.close();
        double bmi;
        wei = wei * 0.45359237;
        hei = hei * 0.0254;
        bmi = wei/(hei*hei);
        
        System.out.printf("BMI is %.4f",bmi);
    }
}
