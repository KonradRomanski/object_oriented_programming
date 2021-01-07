public class AccountLoginFailedException extends Exception {
    static final long serialVersionUID = 1L;
    private int password;
    private String login;
    // pola odpowiadajace danym klienta oraz numerowi konta

    AccountLoginFailedException(){};
    AccountLoginFailedException(String errorMsg, String s, int passwd){
        super(errorMsg);
        login = s;
        password = passwd;
    }

    int getPassword(){
        return this.password;
    }
    String getLogin(){
        return this.login;
    }
}
