import java.util.Scanner;

class Client {

    public static void main(String[] args) {
        String a;

        Context context = new Context();
        context.setState(new ConcreteState1());

        Scanner sc = new Scanner(System.in);

        System.out.println("Current state is " + context.getState());
        char c = 'a';
        while (c != 'a' || c != 'b') {
            System.out.println("---------------------------------------");
            System.out.println("Enter a or b");
            a = sc.next();

            // System.out.println("\nInput is " + a);
            if (a.charAt(0) == 'a') {
                context.onA();
                c = 'a';
            } else if (a.charAt(0) == 'b') {
                context.onB();
                c = 'b';
            } else {

                System.out.println("\nInvalid String");
                break;
            }
        }
        sc.close();
    }
}