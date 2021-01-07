import java.util.ArrayList;

public class Bank implements SearchAccounts, SearchCustomers {
    ArrayList<Customer> customers = new ArrayList<Customer>();
    ArrayList<Account> accounts = new ArrayList<Account>();

    @Override
    public Customer findByName(String name, String surname) throws CustomerNotFoundException{
        for(int i = 0; i < customers.size(); i++) {
            if ((customers.get(i).getName() + customers.get(i).getSurname()).equals(name + surname))
                return customers.get(i);
        }
        throw new CustomerNotFoundException("Customer was not found, wrong data!", name, surname);
    }

    @Override
    public Account findByNumber(int num) throws AccountNotFoundException{
        for(int i = 0; i < accounts.size(); i++) {
            if (accounts.get(i).getNumber() == num)
                return accounts.get(i);
        }
        throw new AccountNotFoundException("Account not found, wrong data!", num);
    }

    @Override
    public ArrayList<Account> findAllCustomerAccounts(Customer cust) throws AccountNotFoundException{
        ArrayList<Account> konta = new ArrayList<Account>();
        for(int i = 0; i < accounts.size(); i++) {
            if (accounts.get(i).getCustomer() == cust)
                konta.add(accounts.get(i));
        }
        if (konta.isEmpty())
            throw new AccountNotFoundException("None account was found!", 0);
        else
            return konta;

    }

    public void addCustomer(Customer customer){ this.customers.add(customer); }
    public void addAccount(Account account){ this.accounts.add(account); }
}
//interfejs wskazuje co klasa musi robic, ale nie wskazuje w jaki sposob ma te zadania wykonac, okresla sie w nim metody ktore klasa musi zaimplementowac
//rozne klasy moga implementowac te same interfejsy, pomagaja one zgrupowac powiazane ze soba metody w jednym miejscu