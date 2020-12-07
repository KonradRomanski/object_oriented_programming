public class Customer
{
    private String name;
    private String surname;
    private String PESEL;
    private String address;

    public Customer (){}
    public Customer ( String s )
    {
        this.name = "UNKNOWN";
        this.surname = "UNKNOWN";
        this.PESEL = "UNKNOWN";
        this.address = "UNKNOWN";
    }

    public String getName()
    {
        return this.name + " " + this.surname;
    }

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
// zadanko 4