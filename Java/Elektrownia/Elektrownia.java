package Elektrownia;

public class Elektrownia
{
    private double maks_ilosc_wegla;
    private double stan_magazynowy;
    private double sprawnosc_elektrowni;
    private int liczba_pracownikow;
    private double czas_dzialania;

    public Elektrownia(double nowa_maks_ilosc_wegla)
    {
        this.maks_ilosc_wegla = nowa_maks_ilosc_wegla;
        this.stan_magazynowy = 0;
        this.sprawnosc_elektrowni = 0;
        this.liczba_pracownikow = 100;
        this.czas_dzialania = 0;
    }

    public double odczyt_maks_ilosc_wegla()
    {
        return this.maks_ilosc_wegla;
    }

    public void nowy_stan_magazynowy(double nowy_stan)
    {
        this.stan_magazynowy = nowy_stan;
    }

    public boolean maks_przerzucenie()
    {
        if (this.stan_magazynowy >= maks_ilosc_wegla) return true;
        else return false;
    }
    
    public double odczyt_stan_magazynowy()
    {
        return this.stan_magazynowy;
    }

    public void nowa_sprawnosc_elektrowni(double nowa_sprawnosc)
    {
        this.sprawnosc_elektrowni = nowa_sprawnosc;
    }

    public double odczyt_sprawnosc_elektrowni()
    {
        return this.sprawnosc_elektrowni;
    }   

    public void nowa_liczba_przyjetych_pracownikow(int nowa_liczba)
    {
        this.liczba_pracownikow = nowa_liczba;
    }

    public int odczyt_liczby_pracownikow()
    {
        return this.liczba_pracownikow;
    }   

    public boolean liczba_odchodzacych_pracownikow(int odchodzacy)
    {
        if (odchodzacy < 0 || this.liczba_pracownikow <=0) return false;
        this.liczba_pracownikow -= odchodzacy;
        return true; 
    }

    public boolean liczba_nowych_pracownikow(int nowi)
    {
        if (nowi < 0) return false;
        this.liczba_pracownikow += nowi;
        return true; 
    }

    public void nowy_czas_dzialania(double nowy_czas)
    {
        this.czas_dzialania = nowy_czas;
    }

    public double odczyt_czasu_dzialania()
    {
        return this.czas_dzialania;
    }   

    public static void main(String[] args) {
        {
            Elektrownia nelektrownia = new Elektrownia(12);

            System.out.printf("Maks ilosc wegla: %f\n\n", nelektrownia.odczyt_maks_ilosc_wegla());

            System.out.printf("Stan magazynowy: %f\n", nelektrownia.odczyt_stan_magazynowy());
            nelektrownia.nowy_stan_magazynowy(888);
            System.out.printf("Nowy stan magazynowy: %f\n\n", nelektrownia.odczyt_stan_magazynowy());

            if(nelektrownia.maks_przerzucenie()) System.out.printf("Maks przerzucenie");
            else System.out.printf("Maks przerzucenie niemozliwe");
            System.out.printf("\n\n");

            System.out.printf("Sprawnosc elektrowni: %f\n", nelektrownia.odczyt_sprawnosc_elektrowni());
            nelektrownia.nowa_sprawnosc_elektrowni(99);
            System.out.printf("Nowa sprawnosc elektrowni: %f\n\n", nelektrownia.odczyt_sprawnosc_elektrowni());

            System.out.printf("Liczba pracownikow %d\n", nelektrownia.odczyt_liczby_pracownikow());
            if (nelektrownia.liczba_odchodzacych_pracownikow(5)) System.out.printf("Usunieto pracownikow\n");
            else System.out.printf("Nie usunieto pracownikow\n");
            System.out.printf("Liczba pracownikow po odejsciu %d\n", nelektrownia.odczyt_liczby_pracownikow());
            if (nelektrownia.liczba_nowych_pracownikow(10)) System.out.printf("Dodano pracownikow\n");
            else System.out.printf("Nie dodano pracownikow\n");
            System.out.printf("Liczba pracownikow po przyjsciu %d\n", nelektrownia.odczyt_liczby_pracownikow());
            System.out.printf("\n");

            System.out.printf("Czas dzialania elektrowni: %f\n", nelektrownia.odczyt_czasu_dzialania());
            nelektrownia.nowy_czas_dzialania(55.6);
            System.out.printf("Nowy dzialania elektrowni: %f\n", nelektrownia.odczyt_czasu_dzialania());
        }
    }
}
