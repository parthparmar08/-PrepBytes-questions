import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner (System.in);
    int t=sc.nextInt();
    while(t-->0)
    {
      int l=sc.nextInt();
      int r=sc.nextInt();
      if(l==r)
      {
        System.out.println(l);
      }
      else
        System.out.println("1");
    }
  }
}