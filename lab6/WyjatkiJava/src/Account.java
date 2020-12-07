public class Account
{
    private int accountNumber;
    private Customer owner;
    private double balance;
    private int password;
    private String login;
    public Account (){}
    public Account (int n , Customer c , int p , String l)
    {
        // cialo metody
    }
    public void login (String l, int passwd)
        throws AccountLoginFailedException
    {
        // cialo metody
    }
    public Customer getCustomer ()
    {
        // cialo metody
    }
    public int getNumber ()
    {
        // cialo metody
    }
    public double getBalance ()
    {
        // cialo metody
    }
    public double withdraw (double amount)
    {
        // cialo metody
    }
}
