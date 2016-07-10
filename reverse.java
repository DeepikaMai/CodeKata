import java.io.*;
import java.util.*;
import java.lang.*;
public class reverse
{
public static void main(String args[])
{
int n,rem=0,n1,x;
Scanner s=new Scanner(System.in);
System.out.println("enter the value");
n=s.nextInt();
x=n;
while(n!=0)
{
n1=n % 10;
rem=(rem*10)+n1;
n/=10;
}
System.out.println("The reverse of " +x+" is"+a);
}
}