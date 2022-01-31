package oop.lab4;

public class pro1_64011153 {
    public static void main(String[] args) {
    Stock stock1 = new Stock("ORCL", "Oracle Corporation");
    stock1.previousClosingPrice = 34.5;
    stock1.currentPrice = 34.35;
    System.out.println("Stock name: " + stock1.name + " Symbol: " + stock1.symbol);
    System.out.println("previous price: " + stock1.previousClosingPrice);
    System.out.println("current price: " + stock1.currentPrice);
    System.out.println("Percent changed: " + stock1.getChangePercent() + "%");
    }
}