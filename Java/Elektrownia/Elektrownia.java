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
        this.liczba_pracownikow = 0;
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

    public 

}