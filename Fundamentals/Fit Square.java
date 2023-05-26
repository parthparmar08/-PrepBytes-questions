import java.util.*;
  import java.io.*;
  
  public class Main {
    public static void main(String args[]) throws IOException {
      
      //write your code here
      Scanner sc=new Scanner(System.in);
      int t=sc.nextInt();
      while(t-->0)
      {
        int m=sc.nextInt();
        int n=sc.nextInt();
        int box;
        box=(m*n)/2;
        System.out.println(box);
      }
    }
  }