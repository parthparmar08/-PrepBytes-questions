import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int m=sc.nextInt();
    int counter=0,count=0;
    int k=n;
    while(k!=0)
    {
      k=k/10;
      count++;
    }
    for(int i=n; i<=m;i=i+(int)(Math.pow(10,count)))
    {
      counter++;
    }
    System.out.println(counter);
  }
}