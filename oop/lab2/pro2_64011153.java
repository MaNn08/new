package oop.lab2;

import java.util.Random;
import java.util.Scanner;

public class pro2_64011153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random rand = new Random();
        String[] game  = {"Scissor","Rock","Paper"};
        System.out.print("Scissor (0), Rock (1), Paper (2) : ");
        int innum = input.nextInt();
        int randomcom = rand.nextInt(3);
        if(innum == 0){
            if(randomcom == 0){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + " too. It is draw.");
            }
            else if(randomcom == 1){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + ". You lost.");
            }
            else if(randomcom == 2){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + ". You won.");
            }
        }
        else if(innum == 1){
            if(randomcom == 0){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + ". You won.");
            }
            else if(randomcom == 1){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + " too. It is draw.");
            }
            else if(randomcom == 2){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + ". You lost.");
            }
        }
        else if(innum == 2){
            if(randomcom == 0){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + ". You lost.");
            }
            else if(randomcom == 1){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + ". You won.");
            }
            else if(randomcom == 2){
                System.out.print("The computer is " + game[randomcom] + ". You are " + game[innum] + " too. It is draw.");
            }
            input.close();
        }
    }
}
