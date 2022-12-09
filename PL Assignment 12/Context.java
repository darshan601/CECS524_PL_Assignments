public class Context {
    AbstractState state;

    // Concrete concrete;

    public void setState(AbstractState s) {
        this.state = s;
        this.state.context = this;
    }

    public void onA() {
        System.out.println("Context -> On A called\n");

        this.state.onA();

    }

    public void onB() {
        System.out.println("Context-> On B called\n");

        this.state.onB();

    }

    public int getState() {
        return this.state.state;
    }

}
