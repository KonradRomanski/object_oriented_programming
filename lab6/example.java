import java.util.*;
import java.lang.*;
import java.io.*;



class ExceptionExample {
    public int checkNumber(int number) {
        if (number < 0) {
            throw new IllegalArgumentException("Number must be >= 0: " + number);
        }
        return number;
    }
    public int checkNumber2(int number) throws IOException {
        if (number < 0) {
            throw new IOException("Number must be >= 0: " + number);
        }
        return number;
    }
    public int checkNumber3(int number) throws IOException{
        return checkNumber2(number);
    }

    public static void main(String[] args) {
        ExceptionExample ee = new ExceptionExample();
        ee.checkNumber(1);
        try{
            //ee.checkNumber(-1);
            ee.checkNumber2(-2);
        }
        catch(IllegalArgumentException e){
            System.out.println(e + "IllegalArgumentException");
        }
        catch(IOException e){
            System.out.println(e + "IOException");
        }
        catch(Exception e){
            System.out.println(e + "Exception");
        }
        finally{
            System.out.println( "finally" );
        }
        System.out.println("End of program");
    }
}
