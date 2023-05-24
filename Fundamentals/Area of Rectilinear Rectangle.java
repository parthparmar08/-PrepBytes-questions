import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t-->0)
    {
      int a=sc.nextInt();
      int b=sc.nextInt();
      int c=sc.nextInt();
      int d=sc.nextInt();
      int e=sc.nextInt();
      int f=sc.nextInt();
      int g=sc.nextInt();
      int h=sc.nextInt();
      long first,second,common=0,x,y;
      //int x_overlap,y_overlap;
      first=(Math.abs(c-a))*(Math.abs(b-d));
      second=(Math.abs(g-e))*(Math.abs(f-h));
      //x_overlap=(boolean)Math.min(c,g)>Math.max(a,e);
      //y_overlap=(boolean)Math.min(d,h)>Math.max(b,f);
      if( (Math.min(c,g)>Math.max(a,e)) && (Math.min(d,h)>Math.max(b,f)) )
      {
        x=Math.abs((Math.max(a,e))-(Math.min(c,g)));
        y=Math.abs((Math.max(b,f))-(Math.min(d,h)));
        common=x*y;
      }
      System.out.println( (( first+second ) - common) );
    }
  }
}