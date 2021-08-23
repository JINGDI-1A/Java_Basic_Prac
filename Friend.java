public class Friend{
    String name, lineid;
    
    public Friend(String str_a, String str_b){
    	name = str_a;
    	lineid = str_b;
    }
    
    public void output(){
    	System.out.println("friend's name is >>> " + name);
    	System.out.println("friend's Line ID is >>> " + lineid);
    }
}