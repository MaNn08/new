package oop.lab2;

import java.util.Scanner;

public class pro5_64011153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter an integer from 1 to 15 : ");
        int row = input.nextInt();
        if(row<1||row>15){System.out.print("Cannot Use This Number "); System.exit(0);}
        for(int i=1;i<=row;i++){
            for(int j=1;j<=(row-i)*2;j++){
                System.out.print(" ");
            }
            for(int k=i;k>=1;k--){
                System.out.print(" "+ k );
            }
            for(int l=2;l<=i;l++){
                System.out.print(" "+ l );
            }
            System.out.println();
        }
        input.close();
    }
}
