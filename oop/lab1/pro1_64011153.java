package oop.lab1;

public class pro1_64011153{
    public static void main(String[] args) {
        int a,birth,death,immigrant,year = 157680000;
        birth = year / 7;
        death = year / 13;
        immigrant = year / 45;
        a = 312032486 + birth - death + immigrant;
        System.out.println(a);
    }
}