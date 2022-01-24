package oop.lab3;

import java.util.Scanner;
 
public class pro3_64011153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size for the matrix: ");
        int intSize = input.nextInt();
       
        int[][] intMetrix = new int[intSize][intSize];
        fillMetrix(intMetrix);
        displayMetrix(intMetrix);
        checkMetrix(intMetrix);
        input.close();
       }
       
       public static int intRandom(int lowerBound, int upperBound) {
        return (int) (lowerBound + Math.random()
          * (upperBound - lowerBound + 1));
       }
       
       public static void fillMetrix(int metrix[][]) {
        for (int i = 0; i < metrix.length; i++) {
         for (int j = 0; j < metrix[i].length; j++) {
          metrix[i][j] = intRandom(0, 1);
         }
       
        }
       
       }
       
       public static void checkMetrix(int metrix[][]) {
       
        boolean blnFound = false;
        for (int i = 0; i < metrix.length; ++i) {
         int intResult = checkRow(i, metrix);
         if (intResult != 2) {
          blnFound = true;
          i++;
          System.out.println("All " + intResult + " on row " + i);
         }
        }
       
        if (blnFound == false) {
       
         System.out.println("No same numbers on a row");
        }

        blnFound = false;
        for (int i = 0; i < metrix.length; ++i) {
         int intResult = checkCol(i, metrix);
         if (intResult != 2) {
          blnFound = true;
          i++;
          System.out.println("All " + intResult + " on column " + i);
         }
        }
       
        if (blnFound == false) {
       
         System.out.println("No same numbers on a column");
        }
       }
       
       public static void displayMetrix(int metrix[][]) {
       
        for (int i = 0; i < metrix.length; i++) {
         for (int j = 0; j < metrix[i].length; j++) {
          System.out.print(metrix[i][j]);
         }
       
         System.out.println("");
        }
       
       }
       
       public static int checkRow(int intRow, int intMetrix[][]) {
       
        for (int i = 1; i < intMetrix[intRow].length; i++) {
         if (intMetrix[intRow][i] != intMetrix[intRow][0])
          return 2;
        }
        return intMetrix[intRow][0];
       
       }
       
       public static int checkCol(int intCol, int intMetrix[][]) {
        for (int i = 1; i < intMetrix.length; i++) {
         if (intMetrix[i][intCol] != intMetrix[0][intCol])
          return 2;
        }
        return intMetrix[0][intCol];
       }
       
       public static int checkMajorDia(int intMetrix[][]) {
        for (int i = 1; i < intMetrix.length; i++) {
         if (intMetrix[i][i] != intMetrix[0][0])
          return 2;
        }
        return intMetrix[0][0];
       }
       
       public static int checkMinorDia(int intMetrix[][]) {
        int intSize = intMetrix.length - 1;
        for (int i = 1; i < intMetrix.length; i++) {
         if (intMetrix[i][intSize - i] != intMetrix[0][intSize])
          return 2;
        }
        return intMetrix[0][0];
       }
       
      }