public class Customer
{
    private String name;
    private String surname;
    private String PESEL;
    private String address;

    public Customer (){}
    public Customer ( String n, String s, String P, String a )
    {
        this.name = n;
        this.surname = s;
        this.PESEL = P;
        this.address = a;
    }

    public String getName() { return this.name; }
    public String getSurname() { return this.surname; }

    @Override // slowo jest uzywane gdy chcemy nadpisac metode ta zdefiniowana przez nas (tu equals)
    public boolean equals(Object c)
    {
        if (! (c instanceof Customer))
        {
            return false;
        }
        Customer o = (Customer) c;
        return this.name.equals(o.getName());
    }
}