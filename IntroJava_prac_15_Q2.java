import java.io.*;
import java.lang.*;

public class IntroJava_prac_15_Q2{
    public static void main(String[] args){
    	Friend[] list_a = new Friend[5];
    	int i;
    	String str_br1, str_br2;
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    	try{
    	    for(i = 0; i < 5; i ++){
    	        System.out.println("Input name of friend NO." + (i+1) + ">>> ");
    	        str_br1 = br.readLine();
    	        System.out.println("Input Line ID of friend NO." + (i+1) + ">>> ");
    	        str_br2 = br.readLine();
    	        
    	        list_a[i] = new Friend(str_br1, str_br2);
    	    }
    	}
    	catch(IOException IOE){
    	    System.out.println("Input with two Strings!!!");
    	}
    	
    	for(i = 0; i < 5; i ++){
    	    list_a[i].output();
    	}	    
    }
}